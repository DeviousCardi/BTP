#include<stdio.h>
#include<limits.h>
int main() {
    int i,j,m,n,a,k=-2147483648,max,min,l[100],z;
    l[0]=2147483648 ;
    scanf("%d%d",&n,&m);
    for(i=1;i<=m;i++) {
        for(j=1;j<=n;j++) {
            scanf("%d",&a);
            if(a>k)
            k=a ;
            max=k ;
            l[i]=k; } }
    for(i=1;i<=m;i++) {
      if(l[i]>k) {
          k=l[i];
          max=k; }
      if(k>=l[i])
         k=l[i];
         min=k; }
    printf("%d",k);
    return 0; }