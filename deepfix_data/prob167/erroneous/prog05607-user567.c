#include<stdio.h>
long int fun(int i,int a[]) {
    if(i==-1)
    return a[0];
    a[i-1]=a[i];
    fun(i-1,a); }
int main() {
    int n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
 long   int s=fun(n,a);
    printf("%ld",s)
    return 0; }