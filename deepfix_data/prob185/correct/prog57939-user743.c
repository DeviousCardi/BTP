#include <stdio.h>
int sum=0;
void fun(int a[],int p,int n,int i,int t) {
    if(i==n)return;
    if(p==t){printf("YES");exit(0);}
    printf("SUM %d i=%d \n",p,i);
    fun(a,p+a[i],n,i+1,t);
    fun(a,p,n,i+1,t);
    return; }
int main() {
    int n,t;
    scanf("%d%d",&n,&t);
    int a[n];
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    fun(a,0,n,0,t);
    return 0; }