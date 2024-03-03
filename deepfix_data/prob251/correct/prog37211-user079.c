#include<stdio.h>
#include<stdlib.h>
int ways(n) {
    if(n==0) {
        return 1; }
    if(n<0) {
        return 0; }
    return ways(n-1)+ways(n-3)+ways(n-5); }
int *money[3];
int main()
{   int ans,n,i;
    scanf("%d",&n);
    for(i=0;i<3;i++) {
        money[i]=(int*)malloc(n*sizeof(int)); }
    ans=ways(n);
    printf("%d",ans);
    return 0; }