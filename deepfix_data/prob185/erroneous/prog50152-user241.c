#include <stdio.h>
int check(int a[],int n,int k) {
      if(n==0 and k!=0)
      return 0;
      else if(K==0)
      return 1;
      else
      return check(a,n-1,k)||check(a,n-1,k-a[n-1]) }
int main() {
    int n,i,k;
    scanf("%d%d",&n,&k);
    for(int i=0;i<n;i++)
    scanf("%d",a+i);
    if(check(a,n,k)==1)
    printf("YES");
    else
    printf("NO");
    return 0; }