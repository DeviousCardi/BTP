#include <stdio.h>
int main(){
    int n;
    int a[1000],temp,i,j,k,b[1000];
scanf("%d",&n);
    for(i=0;i<2*n;i++) {
        scanf("%d",&a[i]); }
    for(i=0;i<n-1;i++) {
       for(j=i+1;j<n;j++) {
           if(a[i]==a[j])
           printf("%d %d",i,j); } } }