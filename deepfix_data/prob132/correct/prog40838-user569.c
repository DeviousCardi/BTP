#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int R[n];
    int E[n+1];
    int i,flag=0;
    for(i=0;i<n;i++) {
        scanf("%d,",&R[i]);
        E[i]=0; }
    for(i=0;i<n;i++) {
        E[R[i]]++; }
    for(i=0;i<n;i++) {
        printf("%d ",E[i]);
        if(E[i]!=i || E[i]!=0) flag++; }
    if(flag==0) printf("Yes");
    else
        printf("No"); }