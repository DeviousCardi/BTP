#include <stdio.h>
#include <stdlib.h>
int hanoi(int n){
    if (n==1){
        return 1; }
    return((2*hanoi(n-1))+1); }
int main() {
	int i;
	int t;
	scanf("%d",&t);
	int arr[t];
	for(i=0;i<t;i++){
	    scanf("%d",&arr[i]); }
	int n=0,count=0;
	for (i=0;i<t;i++){
	    while(n<23){
	        if (arr[i]==hanoi(n)){
	            count++;
	            break; }
	        n++; }
	    if (count==0){
	        printf("No"); }
	    else printf("Yes"); }
	return 0; }