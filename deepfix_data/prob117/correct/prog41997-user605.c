#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int hanoi(int n,int a,int b,int c) {
    if(n==0)
    return 0;
    if(n>0) {
        hanoi(n-1,a,c,b);
        return 1;
        hanoi(1,a,b,c);
        return 1;
        hanoi(n-1,b,a,c);
        return 1; } }
int main() {
	return 0; }