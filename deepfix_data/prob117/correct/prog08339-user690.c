#include <stdio.h>
#include <stdlib.h>
int hanoi(int n){
    int arr[(2^n)-1];
    int x;
    x==n;
    arr[x-n]==hanoi(n); }
int main() {
	int i,j;
	int test;
	scanf("%d",&test);
	int arr[test];
	for(i=0;i<test;i++){
	    scanf("%d",&arr[i]); }
	return 0; }