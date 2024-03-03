#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int hanoi(int);
int hanoi(int n) {
    if(n==1) {
        return 1; }
     return hanoi(2*(n-1))+1; }
int main() {
	int t,i,n;
	int a[100];
	scanf("%d",&t);
	for(i=0;i<t;i++){
	        scanf("%d",&a[i]); }
	printf("%d",hanoi(3));
	return 0; }