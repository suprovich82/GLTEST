#include <stdio.h>
#include <sys/types.h>
#include <dirent.h>
#include <sys/stat.h>
#include <unistd.h>
#include <string.h>
#include <bsd/string.h>
#include <pwd.h>
#include <grp.h>
#include <time.h>

int main(int argc, char **argv) {
    char path[100]; 
    char mode[12];
    char mtime[20];
    DIR *dir;
    struct dirent *entry;
    struct stat buf;
    struct passwd *uid;
    struct group *gid;
    
    
    if ( argc != 2 ) {
        printf("Error: please provide 1 command line parameters\n");
        return 1;
    }
    
    sscanf(argv[1], "%s", &path);
    
    dir = opendir(path);
    chdir(path);
    
    while ( (entry = readdir(dir)) != NULL) {
            
        stat(entry->d_name, &buf); 
        strmode(buf.st_mode,mode);
        
        uid = getpwuid(buf.st_uid);
        gid = getgrgid(buf.st_gid);
        
        strftime(mtime, sizeof mtime, "%b %d %H:%M", localtime(&buf.st_mtime));

        printf("%s\t%d\t%s\t%s\t%d\t%s\t%s\n", mode, buf.st_nlink, uid->pw_name, gid->gr_name, buf.st_size, mtime, entry->d_name);
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