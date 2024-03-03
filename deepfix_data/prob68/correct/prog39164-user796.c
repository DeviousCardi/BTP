#include<stdio.h>
int prod(int a[],int n) {
    int i,j;
    for(i=0;i<n;i++) {
    if(a[i]==0) {
        return 0;
    }}
            a[0]=a[0]*a[1];
            j++;
        for(i=j;i<n;i++) {
           if(a[i]!=0) {
               a[i]=a[i+1]; } }
    return prod(a,n-j); }
int main() {
    long int a[100],i,n,k;
    scanf("%d",&n);
 for(i=0;i<n;i++) {
     scanf("%ld",&a[i]); }
 k=prod(a,n);
 printf("%d",k);
 return 0; }