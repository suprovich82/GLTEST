#include <stdio.h>

int main(int argc, char **argv) {
    int N, D;
    int length;
    
    sscanf(argv[1], "%d", &N);
    sscanf(argv[2], "%d", &D);
    
    // The sum of first N elements of arithmetic progression for the case when a1 = D
    // ( Sn = (2*a1 + d*(n-1))*n/2 ) - where a1 = D, d = D, n = N. 
    length = (D * ( N + 1 ) * N) / 2; 
    
    printf("%d\n", length);
    
    return 0;
}


// Task 2: The Bridge
// The Greedy King wants to collect tribute for each span of the Magical Bridge the merchants pass. 
// He wants to install special wired sensors on each of the spans, with communication cables 
// leading directly to the Treasury Department base station located at one bank of the river. 
// He asked the Mighty Wizard to calculate the total length of the cables. But Mighty Wizard knows 
// that there will be no enough cables in the whole Kingdom and it's better to use wireless solutions. 
// Help him convince the Greedy King.
// Write a program that will help the Mighty Wizard to calculate the total length of the cables required. 
// A program accepts two *command-line arguments*, N - the total number of spans the Magical Bridge has, 
// and the second argument D - the distance between the spans (all spans are distributed evenly and 
// the distance from the bank of the river to the first span is also D), and returns the total length of the cables.

// Example:
// [king@govpc ~]$ ./cables 18 6
// 1026
// [king@govpc ~]$ ./cables 100 3
// 15150


// Note: keep in mind that the Greedy King is so greedy that he will not allow the Mighty Wizard 
// to use the computational power of the governmental computer before making sure the Wizard's program 
// uses heavily optimized mathematical formulas.
