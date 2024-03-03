#include <stdio.h>
#include <stdlib.h>
void sum();
int main() {
    int n,s;
    scanf("%d",&n);
    int arr[n];
    int i;
    for(i=0;i<n;i++) {
        scanf("%d ",&arr[i]); }
    scanf("%d",&s);
    sum(s,n,arr);
	return 0; }
void sum(int s,int n,int a[]) {
    int i,j,k,f=0;
    for(i=0;i<n-1;i++) {
        for(j=i+1;j<n;j++) {
            if(a[i]+a[j]==s) {
                k=a[j];f=1;break; } }
        if(f==1) {
            printf("(%d,%d)\n",a[i],k); } } }