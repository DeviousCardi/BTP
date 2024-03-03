#include <stdio.h>
int sum(int n,int a[], int s);
int main() {
   int n,s,a[1000000],i,x;
   scanf("%d %d",&n,&s);
   for(i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    x=sum(n,a,s);
    if (x==s) {
        printf("yes"); }
    else {
        printf("no"); }
    return 0; }
int a[100000];
int sum(int n,int a[],int s) {
    int t;
    if (n<=1) {
        return 0; }
    else if((n-1)!=-1) {
        t=a[n-1]+sum(n-1,a,s);
        if(t==s) {
            printf("yes"); }
        else {
            printf("no"); } }
    return 0; }