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
    int i,j;
    for (i=0;i<n;i++)
        scanf("%d",&A[i]);
    MaxTill[0]=A[0];
    for (i=0;i<n;i++) {
        for(j=0;j<i;j++) {
            if(A[j]<MaxTill[i])
                MaxTill[i]=A[j];
            else if (A[j]==MaxTill[i])
                continue;
            else
                MaxTill[i+1]=A[j]; } }
    k=strlen MaxTill +1;
    printf("%d",k);
    return 0; }