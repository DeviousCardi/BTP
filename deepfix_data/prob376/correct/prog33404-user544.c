#include <stdio.h>
#include <stdlib.h>
     int c(int n,int r){
     if(r==n||r==0)
     return 1;
     else
     return c(n-1,r-1)+c(n-1,r); }
int main() {
    int n,r;
    scanf("%d %d",&n, &r);
 printf("%d",c(n,r));
	return 0; }