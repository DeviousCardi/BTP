#include<stdio.h>
long sum(int b[],int c);
long sum(int b[],int c) {
    if(c==0)
    return b[0];
    else
    return(b[c]+sum(b,c-1)); }
int main() {
    int n,i;
    long int k;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    k=sum(a,n-1);
    printf("%li",k);
    return 0; }