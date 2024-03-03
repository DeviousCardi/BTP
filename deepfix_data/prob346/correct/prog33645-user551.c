#include <stdio.h>
int main(){
    int n,c,i,j;
    scanf("%d",&n);
    int a[99];
    printf("%d",n);
    for(i=0;i<99;i++) {
        a[i]=0; }
    for(i=0;i<n;i++) {
        scanf("%d",&c);
        a[c-1]++; }
    for(i=0;i<99;i++) {
        for(j=1;j<a[i];j++) {
            printf("%d ",i+1); } }
    printf("end");
    return 0; }