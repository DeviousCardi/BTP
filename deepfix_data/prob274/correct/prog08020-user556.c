#include <stdio.h>
int main(){
    int n,t=0,c=0,pos=0;
    scanf("%d",&n);
    int a[n];
    int i,j;
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    for(i=0;i<n-1;i++)
    {c=0;
        for(j=1;j<=n;j++)
      { if(a[i]==j)
     c++; }
    if(c>=2) {
        pos=i;break; } }
    for(i=pos+1;i<n;i++) {
        if(a[i]==a[pos])
        {t=i+1;break;} }
    printf("%d%d",t,(pos-i));
    return 0; }