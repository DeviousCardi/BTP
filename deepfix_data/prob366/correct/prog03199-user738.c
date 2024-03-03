#include <stdio.h>
int main(){
    int n;
    int a[1000],temp,i,j,k,b[1000];
scanf("%d",&n);
    for(i=0;i<2*n;i++) {
        scanf("%d",&a[i]); }
    for(i=0;i<n;i++) {
        if(a[i]-b[2*n-i-1]==0)
        printf("%d",2*n-2*i-1); } }