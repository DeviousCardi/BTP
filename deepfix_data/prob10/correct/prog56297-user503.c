#include<stdio.h>
#include<string.h>
int max(int a,int b) {
    if(a>b)
        return a;
    else
        return b; }
int main() {
    int n,k;
    scanf("%d\n",&n);
    int A[n];
    int MaxTill[n];
    int i,j=0;
    for (i=0;i<n;i++)
        scanf("%d",&A[i]);
    MaxTill[0]=A[0];
    for (i=0;i<n;i++) {
        if(A[i]<MaxTill[j])
            MaxTill[j]=A[i];
        else if (A[i]==MaxTill[j])
            continue;
        else {
            MaxTill[j+1]=A[i];
            j=j+1; } }
    printf("%d",j+1);
    return 0; }