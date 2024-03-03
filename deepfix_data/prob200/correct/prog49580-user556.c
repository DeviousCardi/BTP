#include<stdio.h>
#include<limits.h>
int n;int k;
int a[100];
int getmaxless(int uplim) {
    int i;int max=0;
     for(i=0;i<n;i++) {
    if(a[i]<uplim) {
        if(a[i]>max)
            max=a[i]; } }
return max; }
int main()
{int i,x;
scanf("%d%d",&n,&k);
for(i=0;i<n;i++)
{scanf("%d",&a[i]); }
int y=getmaxless(INT_MAX);
printf("%d \n",y);
for(i=2;i<=k;i++) {
   x=getmaxless(y);
   printf("%d\n",x);
   y=x; }
return 0; }