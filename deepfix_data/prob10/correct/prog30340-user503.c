#include<stdio.h>
int max(int a,int b) {
    if(a>b)
        return a;
    else
        return b; }
int main() {
    int n;
    scanf("%d\n",&n);
    int A[n];
    int MaxTill[n];
    int i,j;
    for (i=0;i<n;i++)
        scanf("%d",&A[i]);
    for (i=0;i<n;i++) {
        for (j=0;j<i;j++) {
            if (A[i]>A[j])
                MaxTill[i]=max(max(1,MaxTill[j]),1);
            else
                MaxTill[i]=1; } }
    int k=0;
    for (i=0;i<n;i++) {
        k=max(MaxTill[i],k); }
    printf("%d",k);
    return 0; }