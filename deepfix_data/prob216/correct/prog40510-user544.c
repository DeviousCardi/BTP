#include <stdio.h>
#include <stdlib.h>
int fib(int a[20],int n){
    int i;
    a[0]=0;
    a[1]=1;
    for(i=2;i<n;i++){
        a[i]=a[i-1]+a[i-2];
        printf("%d",a[i]); } }
int main() {
	int i,n;
	int a[20];
	return 0; }