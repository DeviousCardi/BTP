#include <stdio.h>
int main(){
    int n,t=0,c=0,pos=0;
    scanf("%d",&n);
    int a[n];
    int i,j;
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    for(i=0;i<n;i++)
    {c=0;
        for(j=1;j<=n;j++)
      { if(a[i]==j)
     c++; }
    if(c>=2) {
        pos=i;break; } }
    printf("%d",pos);
    return 0; }