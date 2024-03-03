#include<stdio.h>
#include<limits.h>
int main() {
    int n,m,A[100],inp,min;
    scanf("%d %d",&n,&m);
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
        scanf("%d ",&inp);
        if(j==0)
        A[i]=inp;
        if(inp>A[i])
        A[i]=inp; }
scanf("\n"); }
    min=A[0];
    for(int i=0;i<n-1;i++) {
        if(min>A[i])
        min=A[i]; }
    printf("%d",min);
    return 0; }