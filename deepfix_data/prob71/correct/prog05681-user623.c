#include <stdio.h>
void swap(int *a,int *b) {
    int t;
    t=*a;
    *a=*b;
    *b=t; }
void sort(int n,int ar[n]) {
    int i,j;
    for(i=0;i<n-1;i++)
    for(j=0;j<n-1-i;j++)
    if(ar[j]>ar[j+1])
    swap(&ar[j],&ar[j+1]); }
int main() {
    int n,i;
    double median,x;
    scanf("%d",&n);
    int ar[n];
    for(i=0;i<n;i++)
    scanf("%d",&ar[i]);
    sort(n,ar);
    if(n%2==0) {
        median=(ar[(n-1)/2]+ar[(n+1)/2])/2.0; }
    else {
        median=ar[n/2]; }
    x=median-(int)median;
    x=x*10000000000;
    if(x==0)
    printf("%d",(int)median);
    else
    printf("%.1lf",median);
    return 0; }