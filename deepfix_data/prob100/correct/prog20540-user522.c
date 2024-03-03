#include<stdio.h>
#include<limits.h>
int main() {
    int n,m,A[100],inp,min;
    scanf("%d %d",&n,&m);
    for(int i=0;i<m;i++) {
        for(int j=0;j<n;j++) {
        scanf("%d ",&inp);
        if(j==0)
        A[i]=inp;
        if(inp>A[i])
        A[i]=inp; } }
    min=A[0];
    for(int i=0;i<m;i++) {
        if(min>A[i])
        min=A[i]; }
    printf("%d",min);
    return 0; }