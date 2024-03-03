#include <stdio.h>
#include <stdlib.h>
int fact(n) {
    if(n==0) return 1;
    return n*fact(n-1); }
int B(n,k) {
    if(n<k) return 0;
    if((k==0&&n==0)||k==0) return 1;
return B(n-1,k)+B(n-1,k-1); }
int main() {
    int arr[20][20],b,n,k;
    scanf("%d",&b);
printf("%d",B(n,k));
	return 0; }