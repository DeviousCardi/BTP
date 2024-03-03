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
    scanf("%d",&n);
    int ar[n];
    for(i=0;i<n;i++)
    scanf("%d",&ar[i]);
    sort(n,ar);
    return 0; }