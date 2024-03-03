#include<stdio.h>
int p( int a,start,n) {
    if(a[start]=='\0')
    return 1;
    else
    return a[start]*p(a,start+1,n-1); }
int main() {
    int n;
    int a[1000000000];
    scanf("%d\n",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    int x=p(a,0,n);
    printf("%d",x);
    return 0; }