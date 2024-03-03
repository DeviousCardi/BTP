#include<stdio.h>
int main() {
    int n;
 scanf("%d",&n);
 int j[n];
 int i,m=0;
 for(i=0;i<n;i++) {
     scanf("%d",&j[i]); }
 for(i=1;i<n;i++) {
     if((j[i-1]<j[i])&&(j[i]>j[i+1])) {
         m=m+1; } }
 printf("%d",m); }