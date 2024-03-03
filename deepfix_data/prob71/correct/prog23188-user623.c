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
    float median,x;
    scanf("%d",&n);
    int ar[n];
    for(i=0;i<n;i++)
    scanf("%f",&ar[i]);
    sort(n,ar);
    if(n%2==0) {
        median=(ar[(n-1)/2]+ar[(n+1)/2])/2.0;
        if(ar[(n-1)/2]%2==0||ar[(n+1)/2]%2==0)
        printf("%.1f",median);
        else
        printf("%d",(int)median); }
    else {
        median=ar[n/2];
        printf("%.0f",median); }
    return 0; }