#include <stdio.h>
int check(int a[],int n,int k) {
      if(n==0 && k!=0)
      return 0;
      else if(k==0)
      return 1;
      else
      return check(a,n-1,k)||check(a,n-1,k-a[n-1]); }
int main() {
    int n,i,a[100],sum=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++) {
        scanf("%d",a+i);
        sum=sum+a[i]; }
    if(sum%2==0) {
        if(check(a,n,sum/2)==1)
        printf("YES");
        else
        printf("NO"); }
    else
    printf("NO");
    return 0; }