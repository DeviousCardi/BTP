#include <stdio.h>
  int a[100]={0};
    int n;
    int k;
int getMaxLessThan(int upperLimit)
{   int temp;
    upperLimit=0; }
int main()
{  int temp;
     scanf("%d%d",&n,&k);
    for(int i=0;i<n;i++) {
        scanf("%d ",&a[i]); }
    for(int i=0;i<n-1;i++)
    {                                                                      for(int j=0;j<n-i-1;j++)                                             {
        if(a[j]<a[j+1]) {
            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp; } } }
   for(int i=0;i<n;i++)
     printf("%d ",a[i]);
    return 0; }