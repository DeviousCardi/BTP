#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int k_is_membr(int k,int n){
    if(n>=0&&n<=23){
        if(k==pow(2,n)-1){
            return 1; }
        else{
            return k_is_membr(k,n-1); } }
return 0; }
int main() {
   	int t;
	scanf("%d\n",&t);
	int A[t][1],i;
	for(i=0;i<t;i++){
	    scanf("%d\n",&A[i][0]);
	    int a=k_is_membr(A[i][0],n);
	    if(a==1){
	        printf("yes"); }
	    else{
	        printf("no"); } }
    return 0; }