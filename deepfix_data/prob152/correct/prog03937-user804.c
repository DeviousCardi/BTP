#include <stdio.h>
int main() {
    int n,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    int m = (n-1)/2;
    int sum = 0;
    for(i=0;i<m;i++) {
         sum = sum + a[i]; }
    int add = 0,j;
    for(j=m+1;j<n;j++)
    add = add+a[j];
    if(sum == add)
    printf(" YES ");
    else
     printf(" NO ");
    return 0; }