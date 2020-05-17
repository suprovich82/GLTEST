#include <stdio.h>

int main(int argc, char **argv) {
    int N, K;
    int steps;
    int mod;
    
    if ( argc != 3 ) {
        printf("Error: please provide 2 command line parameters\n");
        return 1;
    }
    
    sscanf(argv[1], "%d", &N);
    sscanf(argv[2], "%d", &K);
    
    if ( K == 0 ) {
        steps = N;
        printf("%d\n", steps);
        
        return 0;
    }
    
    K += 1; // ступень куда может стать великан  
    
    if ( N % K == 0 ) {
        // printf("test %d\n", N%K);
        steps = N/K;
        printf("%d\n", steps);
    } else {
        // printf("test2 \n");
        mod = N % K;
        // printf("mod = %d\n", mod);
        // printf("N/K = %d\n", N/K);
        
        steps = (N / K) + mod;
        printf("%d\n", steps);
    }
    
    return 0;
}




// Task 1: The Stairway

//     One Giant wants to climb the Magical Tower stairway. He knows he could step over each K-th stair. 
// An Old Troll is asking the Giant how many stairs will he step in total if there are N stairs in the stairway. 
// Write a program, that will help Giant answer the Old Troll.
//    The program accepts N and K as *command-line arguments* (not stdin) and returns the total number 
// of stairs the Giant steps to stdout.

// Example:
// [giant@laptop ~]$ ./steps 100 0
// 100

// [giant@laptop ~]$ ./steps 10 3
// 4

// [giant@laptop ~]$ ./steps 11 3
// 4

// [giant@laptop ~]$ ./steps 12 3
// 4

// [giant@laptop ~]$ ./steps 13 3
// 4

// [giant@laptop ~]$ ./steps 14 3
// 5

// [giant@laptop ~]$ ./steps 986 16
// 58