#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void hanoi(int n,int a,int b,int c) {
    if(n==0)
    return 0;
    if(n>0) {
        hanoi(n-1,a,c,b);
        hanoi(1,a,b,c);
        hanoi(n-1,b,a,c); } }
int main() {
	return 0; }