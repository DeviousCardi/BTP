#include <stdio.h>
#include <stdlib.h>
int b(n,k) {
    if(n<k) return 0;
    if((k==0&&n==0)||k==0) return 1;
    return b(n-1,k)+b(n-1,k-1); }
int main() {
    int arr[20][20],b;
    scanf("%d",&b);
    printf("%d",b(n,k));
	return 0; }