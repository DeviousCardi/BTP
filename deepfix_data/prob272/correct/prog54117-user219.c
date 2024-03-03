#include <stdio.h>
int main() {
    int Tn,a1,a2,n,i;
    int a=Tn-1;
    int b=Tn-2;
    scanf("%d%d%d",&a1,&a2,&n);
    if(n==1){printf("%d",a1);}
    else if(n==2){printf("%d",a2);}
    else for(i=3;i<=n;i=i+1) {
        Tn=a + b-2 ;
    printf("%d",Tn); }
    return 0; }