#include<stdio.h>
int main() {
    int c[100],k,n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++) {
     scanf("%d",&c[i]); }
    for(i=0;i<n;i++) {
     if(c[i]<c[i+1]) {
     printf("%d",c[i]); } }
    return 0; }