#include <stdio.h>
int main(){
    int  a1, a2, n ;
    scanf("%d%d%d",&a1,&a2,&n);
    int Tn=T(n-1)+T(n-2)-2;
    if(n==1)
     Tn=a1;
     if(n==2)
     Tn=a2;
     if(n>2)
       Tn=T(n-1)+T(n-2)-2;
    printf("%d",T(n)); }
     return 0; }