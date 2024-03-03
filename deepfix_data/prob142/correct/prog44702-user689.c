#include <stdio.h>
#include <stdlib.h>
int toh(int n,char A,char B,char C) {
    if(n==0)
    {return;}
    toh(n-1,A,B,C);
    printf("%c->%c",A,C);
    toh(n-1,B,C,A); }
int main() {
    int n;
    char A,B,C;
    scanf("%d",&n);
    toh(n,A,B,C);
	return 0; }