#include <stdio.h>
#include <stdlib.h>
int catalan(int n) {
    if(n==0)
    return 1;
    else
    return((2*(2*n-1)*catalan(n-1)/(n+1)); }
int main() {
    int t;
    scanf("%d\n",&t);
    int arr[t],i,j;
    for(i=0;i<t;i++) {
        scanf("%d\n",&arr[i]); }
    for(i=0;i<t;i++) {
       for(j=0;j<20;j++) {
           if(catalan(j)>arr[i]) {
               printf("%d\n",catalan(j));
               break; } } }
    return 0; }