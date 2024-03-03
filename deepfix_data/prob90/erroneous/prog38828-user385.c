#include <stdio.h>
int main(){
    int p,n,l=0;
    scanf("%d\n%d\n",&p,&n);
    int a[1000];
    int i,j;
    for(i=0;i<n;i=i+1) {
        scanf("%d",&a[i]); }
    if(p>0)
  { if(p<a[n])
    printf("lucky");}
  for(i=0;i<n;i++)
  { for(j=1;j<n;j++)
  if(a[i]+a[j]=p)
  l=l+1; }
  if
  l=0;
  printf("unlucky");
  else
  printf("lucky");
return 0; }