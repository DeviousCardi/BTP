#include <stdio.h>
int main(){
    int a1,a2,n,d,f,i;
    scanf("%d %d %d",&a1,&a2,&n);
    for(i=1;i<=n-2;i++) {
        d=a1;
        f=d-2;
        a1=a2;
        a2=a2+f; }
    printf("%d",a2);
    return 0; }