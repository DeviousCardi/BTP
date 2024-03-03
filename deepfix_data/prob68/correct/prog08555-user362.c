#include<stdio.h>
long long int product(int n,int a[]);
int main() {
    int n,i,x;
    int  a[10000];
    scanf("%d\n",&n);
    for(i=0;i<n;i++) {
        scanf("%d ",&a[i]); }
    x= product(n,a);
    printf("%d",x);
    return 0; }
long long int product(int n,int a[]) {
    int p;
    if(n==0) {
        return 0; }
    if(n==1) {
        return a[0]; }
    else if ((n-1)!=-1) {
        p=a[n-1];
        return (p*product( n-1,a)); } }