#include <stdio.h>
int main(){
    int a1,a2,n,i;
    lang int t(n)=0;
    scanf("%d %d %d",&a1,&a2,&n);
    for (i=1;i<=n;i++) {
        t(n)=a1+a2-2;
        a1=a2;
        a2=t(n); }
    printf("%ld",t(n));
      return 0; }