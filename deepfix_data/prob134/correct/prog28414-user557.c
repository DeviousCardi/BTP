#include <stdio.h>
#include <stdlib.h>
int bin(int n,int k){
    if(n<k)
        return 0;
    else if(n==0&&k==0)
        return 1;
    else if(k==0)
        return 0;
    else
        return bin(n-1,k)+bin(n-1,k-1); }
int main() {
    int b,i=1,j=1;
    b=bin(6,2);
    printf("%d",b);
	return 0; }