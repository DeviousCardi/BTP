#include <stdio.h>
#include <stdlib.h>
int fib(int);
int main() {
    int i,j,n,arr[100];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    for(j=0;j<=20;j++) {
        if(arr[i]==fib(j))
            printf("yes");break; } }
	return 0; }
int fib(int num) {
    if (num<=20) {
            if(num==0) return 0;
            else if (num==1|| num==2)
            return 1;
            else
            return ( fib(num-1) + fib(num-2) ); } }