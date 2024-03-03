#include <stdio.h>
int sum(int n,int a[], int s);
int main() {
   int n,s,a[1000000],i,x;
   scanf("%d %d",&n,&s);
   for(i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    x=sum(n,a,s);
    if(x==1)
        printf("YES");
    else if(x==0)
        printf("NO");
    return 0; }
int a[100000];
int sum(int n,int a[],int s) {
    int t,flag;
    if (n<=1) {
        return 0; }
    else {
        t=a[n-1]+a[n-2];
        if(t==s)
          flag=1;
        else
          flag=0;
        return sum(n-1,a,s); }
    return flag; }