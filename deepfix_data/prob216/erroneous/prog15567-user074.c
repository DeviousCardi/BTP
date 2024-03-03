#include <stdio.h>
#include <stdlib.h>
fibonacci_num(int n) {
        if(n=0) {
                return 0 }
        if(n=1) {
                return 1; }
        if(n>1) {
                fibonacci_num(n)= fibonacci_num(n-1)+fibonacci_num(n-2);
                return fibonacci_num; } }
int main() {
    int ,num,i,t,arr[100];
	scanf("%d",&t);
	scanf("%s",arr);
	for(i=0;i<t;i++) {
	        num=fibonacci_num(a[i]);
	        printf("%d",num); }
	return 0; }