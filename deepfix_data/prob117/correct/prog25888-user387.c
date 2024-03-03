#include <stdio.h>
#include <stdlib.h>
int series(int a[],int n,int k){
    if(n==0) {
    return 0; }
    if(a[n-1]==k) {
        return 1; }
    return series(a,n,k); }
int main(){
int i,t,n,k;
int a[1000000];
scanf("%d",&t);
int series(int a[],int n,int k);
for(i=0;i<t;i++){
if((int) series(a,n,k)==k) {
    printf("yes\n"); }
else {
    printf("no\n"); } }
printf("\n");
	return 0; }