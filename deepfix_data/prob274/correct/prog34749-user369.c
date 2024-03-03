#include <stdio.h>
int calc(int a[],int c,int i,int n)
{   int t=1,c1=0;
     while(c1<n+1) {
        i--;
        i=a[i];
        t++;
        if(c==i)
        break;
        c1++; }
   if(c==i)
   return t;
   else
   return 0; }
int main() {
    int n,ti,c,i;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(int j=0;j<n;j++)
   {  c=a[j];
      i=a[j];
      ti=calc(a,c,i,n);
       if(ti)
      { printf("%d %d",ti,ti-1);
        break; } }
    return 0; }