#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int R[n];
    int E[n];
    int i=0,flag=0;
    scanf("%d,",&R[0])
    for(i=1;i<n;i++) {
        scanf(",%d",&R[i]);
        E[i]=0; }
    for(i=0;i<n;i++) {
        E[R[i]]++; }
    for(i=0;i<n;i++) {
        if(E[i]==i || E[i]==0) flag++; }
    if(flag==n) printf("Yes");
    else
        printf("No"); }