#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int check_k(int arr[],int n,int t){
    int i,k;i=0;
    k=pow(2,n);
    if(arr[i]==k-1)
    return 1;
    else
    if((for(i=0;i<=t-1;i++){
        arr[i]!=k-1
    })
    return 0;
    while(n>0&&n<=23){
    return check_k(arr,n-1,k-1); } }
int main() {
	int ar[100];
	int t,i,j,a;
	scanf("%d\n",&t);
	for(a=0;a<=t-1;a++){
	    scanf("%d",&ar[a]); }
	for(i=0;i<=t-1;i++){
	    j=check_k(ar,23,t);
	 if(j==1)
	 printf("yes\n");
	 else
	 printf("no\n"); }
	return 0; }