#include <stdio.h>
#include <stdlib.h>
int series(int a[],int n,int k){
    if(n==k) {
    return 0; }
    if(a[n-1]==k) {
        return 1; }
    return series(a,n,k); }
int main(){
int t,n,k;
int a[100000];
scanf("%d",&t);
scanf("%d",&k);
int series(int a[],int n,int k);
if(((int) series(a,n,k))==k) {
    printf("yes\n"); }
else {
    printf("no\n"); }
printf("\n");
	return 0; }