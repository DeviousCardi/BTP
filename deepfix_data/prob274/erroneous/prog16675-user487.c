#include <stdio.h>
int main(){
    int n;
    int i,j,m;
    int roomnum;
    int a[100];
    int b[100];
    int t,k;
    scanf ("%d",&n);
    for (i=1;i<=n;i=i+1)
      {scanf ("%d",&roomnum);
       a[i]=roomnum; }
    for (j=0;j;j=j+1)
      { if (j==0)
        b[j]=1;
        else
         {b[j]=a[b[j-1]] } }
    return 0; }