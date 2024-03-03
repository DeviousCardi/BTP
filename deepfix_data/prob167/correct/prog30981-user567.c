#include<stdio.h>
int fun(int i, int a[]) {
    if(i==-1)
    return a[0];
    a[i-1]=a[i-1]+a[i];
    printf("sum is =%d\n",a[i-1]);
    fun(i-1,a); }
int main() {
    int i,n;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {scanf("%d",&a[i]);}
    int s=fun(n-1,a);
    printf("%d",s);
    return 0; }