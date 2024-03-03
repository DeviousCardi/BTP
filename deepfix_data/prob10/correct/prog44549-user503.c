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
    MaxTill[0]=A[0];
    for (i=0;i<n;i++) {
        int k=1;
        for (j=0;j<i;j++) {
            if (A[i]>A[j])
                MaxTill[i]=max(max(1+MaxTill[j],k+1),1);
            else
                MaxTill[i]=1; }
        for (i=0;i<n;i++) {
            k=max(MaxTill[i],k); } }
    int k=0;
    for (i=0;i<n;i++) {
        k=max(MaxTill[i],k); }
    printf("%d",k);
    return 0; }