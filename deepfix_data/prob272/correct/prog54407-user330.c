#include <stdio.h>
int main(){
 int a1,a2,n,a,b,i,c;
 scanf("%d%d%d",&a1,&a2,&n);
 if(n==1)printf("%d",a1);
 else if(n==2)printf("%d",a2);
 else  {
       a=a1,b=a2;
       for(i=3;i<=n;i++){
        c=a+b-2;
        a=b;
        b=c; }
        printf("%d",b); }
    return 0; }