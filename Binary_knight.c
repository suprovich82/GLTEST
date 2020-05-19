#include <stdio.h>
#include <sys/types.h>
#include <dirent.h>
#include <sys/stat.h>

int main(int argc, char **argv) {
    char path[250]; // 256 is a limitation of command length in shell
    char filepath[250];
    DIR *dir;
    struct dirent *entry;
    struct stat buf;
    
    
    if ( argc != 2 ) {
        printf("Error: please provide 1 command line parameters\n");
        return 1;
    }
    
    sscanf(argv[1], "%s", &path);
    
    dir = opendir(path);

    while ( (entry = readdir(dir)) != NULL) {    
        if ( entry->d_name == "." ) {
            chdir(path);
            getcwd(filepath, 250);
        } else if ( entry->d_name == ".." ) {
            chdir(path);
            chdir("..");
            getcwd(filepath, 250);
        } else {
            snprintf(filepath, sizeof filepath, "%s/%s", path, entry->d_name);
            printf("%s\n", filepath);
        }
        
        stat(filepath, &buf);
        printf("%s %d %s %s %d %s %s\n", 
            buf.st_mode, buf.st_nlink, buf.st_uid, buf.st_gid, buf.st_size, buf.st_mtim, entry->d_name);
    };

    closedir(dir);
    
    return 0;
}


// Task 3: The Knight
// The Binary Knight fights for every bit of free space on his hard drive. 
// His favorite arsenal is a combination of `ls -la` and `rm -rf` tools. 
// Once, during a glorious three-day fight, he has accidentally removed the `ls` tool. 
// Now he does not know which files are there on his disk and how much space they occupy.
// Help the Binary Knight get back to glorious disk freedom battles soon. 
// Write a program that produces the same output as `ls -la`.

// Note: providing separate support for -l and -a flags is not strictly required but will be appreciated