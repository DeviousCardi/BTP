#include <stdio.h>
  int a[100]={0};
    int n;
    int k;
int getMaxLessThan(int m) {
    int temp;
       for(int i=0;i<n-1;i++)
    {                                                                      for(int j=0;j<n-i-1;j++)                                             {
        if(a[j]<a[j+1]) {
            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp; } } }
     for(int i=0;i<n;i++) {
       m=a[i];
       return m; } }
int main()
{   int upperLimit;
     scanf("%d%d",&n,&k);
    for(int i=0;i<n;i++) {
        scanf("%d ",&a[i]); }
  int p,t=0;
   for(int i=1;i<=k;i++) {
    getMaxLessThan(p);
    printf("%d\n",p); }
    return 0; }