#include<stdio.h>
int sum=0;
int fun(int i, int a[]) {
    if(i==-1)
    return sum;
    sum=sum+a[i];
    fun(i-1,a); }
int main() {
    int i,n;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {scanf("%d",&a[i]);printf("a is =%d\n",a[i]);}
    int s=fun(n,a);
    for(i=0;i<n;i++)
    printf("a is =%d\n",a[i]);
    printf("%d",s);
    return 0; }