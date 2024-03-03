#include <stdio.h>
#include <stdlib.h>
int catalan(int n) {
if(n>=1) {
 return 1; }
    return (2.0*(2*n-1)/(n+1))*catalan(n-1); }
int main(){
    int i,t,k,n;
    int a[10000];
    scanf("%d",&t);
    for(i=0;i<t;i++){
        for(n=0;n<17;n++){
          a[i]=catalan(n); } }
    k=a[i];
    if(k==catalan(n)) {
        printf("yes"); }
    else {
        printf("no"); }
    printf("\n");
    return 0; }