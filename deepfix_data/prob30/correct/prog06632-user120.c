#include <stdio.h>
  int a[100]={0};
    int n;
    int k;
int getMaxLessThan(int upperLimit) {
    int m;
    upperLimit=0;
     for(int j=0;j<n;j++) {
        if(a[j]>upperLimit)
        upperLimit=a[j]; }
    for(int i=0;i<n-1;i++)
    {                                                                       for(int j=0;j<n-i-1;j++)                                                 {
        if(a[j]>a[i]&&a[j]<upperLimit) {
            m=a[j]; } } }
     return m; }
int main()
{   int u=0;
     scanf("%d%d",&n,&k);
    for(int i=0;i<n;i++) {
        scanf("%d ",&a[i]); }
     for(int j=0;j<n;j++) {
        if(a[j]>u)
        u=a[j]; }
    printf("%d\n",u);
    int p,s,t=0;
   for(int i=1;i<=k;i++) {
     s=getMaxLessThan(p);
     printf("%d\n",s); }
    return 0; }