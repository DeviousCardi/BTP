#include <stdio.h>
int main(){
    int n,i,j,count;
    scanf("%d",&n);
    int a[n],b[99];
    for(i=0;i<=n-1;i++) {
        scanf("%d",&a[i]); }
    for(i=0;i<99;i++) {
             b[i]= 0; }
    count=0;
    for(i=0;i<=n-1;i++) {
        for(j=0;j<=99;j++) {
       if(a[i]==j) {
           b[j]++; }
    }count=0; }
for(i=0;i<99;i++) { }
       for(j=0;j<=99;j++) {
         for(i=1;i<=b[j];i++) {
             printf("%d ",j); } }
    printf("end");
    return 0; }