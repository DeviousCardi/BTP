#include <stdio.h>
#include <stdlib.h>
int c=0;
char A[20];
char B[20];
char C[20];
void hanoi(int n, char A[], char B[], char C[]){
    if(n==0) return;
    c++;
    hanoi(n-1,A,B,C);
    c++;
    hanoi(n-1,B,C,A);
    return ; }
int main() {
    int n;
    scanf("%d", &n);
	hanoi(n,A,B,C);
	printf("%d", c);
	return 0; }