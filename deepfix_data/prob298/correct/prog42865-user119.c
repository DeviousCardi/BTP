#include <stdio.h>
#include <stdlib.h>
double fact(int n) {
    int c;double f=1;
    for(c=1;c<=n;c++) {
        f=f*c; }
    return f; }
int term(int n) {
    int a;
    a=fact(2*n)/(fact(n+1)*fact(n));
    return a; }
int search(int n,int k) {
    if(k<term(n)) {
    printf("%d",n);
    return 0; }
    if(k==term(n)) {
        printf("%d",n);
    return 1; }
    return search(n+1,k); }
int main(){
    int t,i,n;int k;
    scanf("%d",&t);
    for(i=1;i<=t;i++) {
        scanf("%d",&k);
        n=1;
        if(search(n,k))
        printf("yes\n");
        else
        printf("no\n"); }
   return 0; }