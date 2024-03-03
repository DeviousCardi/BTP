#include <stdio.h>
#include <stdlib.h>
int b(int n,int k){
    if(n<k)
    return 0;
    else if(n==0&&k==0)
    return 1;
    else if(k==0)
    return 1;
    else
    return(b(n-1,k)+b(n-1,k-1)); }
void num(int m){
    int n,k;
     m=b(n,k);
    printf("%d,%d",n,k); }
int main() {
	return 0; }