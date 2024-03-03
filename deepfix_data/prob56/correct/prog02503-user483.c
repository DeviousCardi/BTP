#include<stdio.h>
#include<stdlib.h>
int catalan(int n) {
    if(n==0) {
        return 1; }
    else
        return (2*(2*n-1)*catalan(n-1))/(n+1) ; }
int main() {
   int i,j,n;
scanf("%d\n",&n);
int a[n];
for(i=0;i<n;i++) {
scanf("%d\n",&a[i]);}
     for(j=0;j<n;j++) {
         for(i=0;i<n;i++) {
    if(a[j]<=catalan(j)) {
        printf("%d\n",catalan(j));
        break; } } }
    return 0; }