#include <stdio.h>
#include <stdlib.h>
int funct(int n,int k){
    if(k==0)
    return 1;
    return(n*funct(n,k-1)); }
int f1(int n){
    int i,j;
    for(i=0;i<=200000;i++){
        for(j=0;j<=200000;j++){
            if(n==funct(i,j)){
                printf("Yes");
                return 0; } }
    }printf("No");
	return 0; }
int main() {
	int i,a[10000];
	scanf("%d",&n);
	for(i=0;i<n;i++) {
	    scanf("%d",a[i]) }
	for(i=0;i<n;i++) {
	    f1(a[i]); }
	return 0; }