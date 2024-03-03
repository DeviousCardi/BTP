#include <stdio.h>
int sum(int n,int a[], int s);
int main() {
   int n,s,a[1000000],i,x;
   scanf("%d %d",&n,&s);
   for(i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    x=sum(n,a,s);
    return 0; }
int a[100000];
int sum(int n,int a[],int s) {
    int t,flag;
    if (n<=1) {
        return 0; }
    else if ((n-1)!=-1) {
        t=a[n-1];
        if(t==s) {
           flag=1; }
        else {
           flag=0; } }
    if (flag==1) {
        printf("Yes"); }
    else {
        printf("No"); }
    return(t+sum(n,a,s)); }