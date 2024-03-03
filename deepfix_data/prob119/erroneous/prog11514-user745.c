#include <stdio.h>
#include <stdlib.h>
int c=0;
char A[20];
char B[20];
char C[20];
int hanoi(int n, char A, char B, char C){
    if(n==0) return;
    c++;
    hanoi(n-1,A,B,C);
    k=k+1;
    c++;
    hanoi(n-1,B,C,A);
    return c; }
int main() {
    int n;
    scanf("%d", &n);
	int k=hanoi(n,A,B,C);
	return 0; }