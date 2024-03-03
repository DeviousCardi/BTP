#include <stdio.h>
int main(){
    long a[50000],b[50000],n,i,j,x=0,l;
    scanf("%ld",&n);
    for(i=0;i<(2*n);i++) {
        scanf("%ld",&a[i]); }
    for(i=0;i<n;i++) {
        for(j=n;j<(2*n);j++) {
            if(a[i]==a[j]) {
                b[x]=j-i;
                x++; } } }
    for(i=0;i<x;i++) {
        l=b[i];
        for(j=i+1;j<x;j++) {
            if(b[i]>=b[j]) {
               b[i]=b[j];
               b[j]=l;
               l=b[i]; } } }
       printf("%ld",b[0]);
       return 0; }