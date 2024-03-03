#include<stdio.h>
int check(int a[100],int k,int n,int sum,int flag,int b ) {
    if(sum==b)
    flag=1;
    if(k==n)
    return flag;
    flag=(check(a,k+1,n,sum+a[k],flag,b))||(check(a,k+1,n,sum,flag,b));
 return flag; }
int main() {
    int a[100],flag=0,n,i,b;
    scanf("%d%d",&n,&b);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    flag=check(a,0,n,0,0,b);
    if(flag==1)
    printf("YES");
    else
    printf("NO");
    return 0; }