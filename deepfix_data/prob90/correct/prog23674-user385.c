#include <stdio.h>
int main(){
    int p,n,f=1;
    scanf("%d\n%d",&p,&n);
    int a[1000];
    int i,j;
    for(i=0;i<n;i=i+1) {
        scanf("%d",&a[i]); }
    for(i=0;i<n;i=i+1)
    { for(j=0;j<=i;j=j+1)
    { if((a[i]+a[j])!=p)
      f=1;
      else
      f=0; }
     printf("unlucky");} }