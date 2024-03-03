#include<stdio.h>
#include<limits.h>
int main()
{   int a,max,leastmax,n,m;
    scanf("%d%d",&n,&m);
    for(int i=0;i<m;i++) {
        for(int j=0;j<n;j++) {
            scanf("%d",&a);
            if(j==0) {
                max=a; }
            if(a>max) {
                max=a; } }
        if(i==0) {
            leastmax=max; }
        if(leastmax>max) {
            leastmax=max; } }
    printf("%d",leastmax);
    return 0; }