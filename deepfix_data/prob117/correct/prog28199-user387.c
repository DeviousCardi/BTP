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
int a[5000000];
int series(a,n,k);
if(t=n&&a==k) {
    printf("yes"); }
else {
    printf("no"); }
	return 0; }