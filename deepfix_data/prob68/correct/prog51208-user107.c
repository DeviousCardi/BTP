#include<stdio.h>
int p( int a[],int start,int n) {
    if(a[start]=='\0')
    return 1;
    else
    return (a[start]*p(a,start+1,n-1)); }
int main() {
    int n,i;
    int a[n];
    scanf("%d\n",&n);
    for(i=0;i<n;i++)
    scanf("%d ",&a[i]);
    long int x=p(a,0,n);
    printf("%ld",x);
    return 0; }