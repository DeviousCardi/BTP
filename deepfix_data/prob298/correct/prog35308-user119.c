#include <stdio.h>
#include <stdlib.h>
int fact(int n) {
    int c,f=1;
    for(c=1;c<=n;c++) {
        f=f*c; }
    return f; }
int term(int n) {
    int a;
    a=fact(2*n)/fact(n+1);
    a=a/fact(n);
    return a; }
int search(int n,int k) {
    if(k<term(n))
    return 0;
    if(k==term(n))
    return 1;
    else
    return search(n+1,k); }
int main(){
    int t,k,i,n;
    scanf("%d",&t);
    for(i=1;i<=t;i++) {
        scanf("%d",&k);
        n=0;
        if(search(n,k))
        printf("yes\n");
        else
        printf("no\n"); }
   return 0; }