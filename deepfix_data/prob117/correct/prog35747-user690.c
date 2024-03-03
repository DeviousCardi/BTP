#include <stdio.h>
#include <stdlib.h>
int hanoi(int n){
    if (n==1){
        return 1; }
    return ((2*hanoi(n-1))+1); }
int main() {
	int i,j;
	int test;
	scanf("%d",&test);
	int arr[test],series[1000];
	for(i=0;i<test;i++){
	    scanf("%d",&arr[i]); }
	for(i=0;i<test;i++){
	    for (j=0;j<1000;j++){
	        if(arr[i]==hanoi(j)){
	            printf("Yes"); }
	        else printf("No"); } }
	return 0; }