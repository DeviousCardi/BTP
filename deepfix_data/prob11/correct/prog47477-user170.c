#include <stdio.h>
int check(int a[],int sum,int n,int s)
{   if(sum==s)
    return 1;
    if (n==-1) {
        return 0; }
    return check(a,sum,n-1,s)||check(a,sum+a[n],n-1,s); }
int main()
{int n,i,s;
scanf("%d %d\n",&n,&s);
int a[n];
for(i=0;i<n;i++) {
    scanf("%d ",&a[i]); }
  int p,sum=0;
 p=check(a,sum,n-1,s);
 if(p==1)
printf("YES");
else
printf("NO");
    return 0; }