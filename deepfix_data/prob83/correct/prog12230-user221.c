#include <stdio.h>
int sto(int da[],int f,int n,int oi) {
    int a;
    a=da[oi];
    da[oi]=da[n-f+oi];
    da[n-f+oi]=a; }
int main() {
    int n,d,i;
    scanf("%d",&n);
    int num[n];
    for(i=0;i<n;i++) {
        scanf("%d",&num[i]); }
    scanf("%d",&d);
    for(i=0;i<d;i++) {
        sto(num[n],d,n,i); }
    for(i=0;i<n;i++) {
        printf("%d",num[i]);
        if(i<n-1)printf(" "); }
    return 0; }