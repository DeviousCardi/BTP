#include <stdio.h>
int main() {
    int Tn,a1,a2,n,i;
    scanf("%d%d%d",&a1,&a2,&n);
    if(n=1){printf("Tn=a1");}
    else if(n=2){printf("Tn=a2");}
    else for(i=3;i<=n;i=i+1) {
        Tn=Tn-1+Tn-2-2 ;
    printf("%d",Tn); }
    return 0; }