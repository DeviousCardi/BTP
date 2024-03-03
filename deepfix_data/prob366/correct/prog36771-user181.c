#include <stdio.h>
int main(){
    int n,f=0;
    scanf("%d",&n);
    int a[n+1];
    for(int j=1;j<=n;j++)
    a[j]=0;
    int k;
    for(int i=1;i<=2*n;i++) {
        scanf("%d",&k);
        if(k==0)
        f=1;
        a[k]=i-a[k]; }
    int m;
       if(n!=0)
          m=200;
       else
     m=0;
     if(!f)
  {  for(int j=1;j<=n;j++) {
        if(a[j]<m)
        m=a[j]; }
    printf("%d",m);}
    else
   { for(int j=0;j<n;j++) {
        if(a[j]<m)
        m=a[j]; }
    printf("%d",m);}
    return 0; }