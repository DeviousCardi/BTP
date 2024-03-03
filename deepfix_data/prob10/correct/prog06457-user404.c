#include<stdio.h>
int main() {
    int n,c=0,k=0,j,i;
    scanf("%d",&n);
    int a[n],len[n];
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++) {
        for(j=i+1;j<n;j++) {
            if(a[j]>a[i])
            c++; }
        len[i]=c;
        c=0; }
    for(i=0;i<n;i++) {
        for(j=0;j<n;j++)
        {if(len[i]>=len[j])
        k=k+1;}
        if(k==n)
        printf("%d",len[i]+1); }
    return 0; }