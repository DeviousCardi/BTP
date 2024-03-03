#include <stdio.h>
int check(int a[],int count,int size,int sum,int sum1){
      if(sum1==sum)
      return 1;
      if(count==size)
      return 0;
      else
    return check(a,count+1,size,sum,sum1+a[count])||check(a,count+1,size,sum,sum1); }
int main() {
    int m,n;
    scanf("%d %d",&m,&n);
    int a[m],sum1=0;
    for(int i=0;i<m;i++) {
        scanf("%d",&a[i]); }
    if(check(a,0,m,n,0))
    printf("YES");
    else
    printf("NO");
    return 0; }