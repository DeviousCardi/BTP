#include <stdio.h>
  int a[100]={0};
    int n;
    int k;
int getMaxLessThan(int m) {
    int temp;
        for(int i=0;i<n-1;i++)
    {                                                                       for(int j=0;j<n-i-1;j++)                                                 {
        if(a[j]>a[i]) {
            m=a[j]; }
          return m; } } }
int main()
{   int upperLimit;
     scanf("%d%d",&n,&k);
    for(int i=0;i<n;i++) {
        scanf("%d ",&a[i]); }
    int p,s;
   for(int i=1;i<=k;i++) {
     s=getMaxLessThan(p);
     printf("%d\n",s); }
    return 0; }