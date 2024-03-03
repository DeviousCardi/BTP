#include <stdio.h>
int main(){
    int a1,a2,n,t=0,i=3;
    scanf("%d%d%d",&a1,&a2,&n);
    if(n==1)
      printf("%d",a1);
    else if(n==2)
      printf("%d",a2);
    else if(n>2)
      for(i=3;i<=n;i++) {
           t=a1+a2-2;
           a1=a2;
           a2=t; }
    printf("%d",t);
    return 0; }