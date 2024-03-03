#include <stdio.h>
int main(){
    int a1,a2,n;
    int i=1;
    scanf("%d %d %d",&a1,&a2,&n);
    for(i=1;i<=n;i++){
        if(n==1)
        printf("%d",a1);
        if(n==2)
        printf("%d",a2);
        if(n>2)
        {int T_n=a2+a1-2;
        a1=a2;
        a2=T_n;} }
    printf("%d",n);
    return 0; }