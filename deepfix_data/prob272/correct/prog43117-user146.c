#include <stdio.h>
int main(){
    int a,b,n,c,i;
    scanf("%d%d%d",&a,&b,&n);
    c=a+b-2;
    for(i=3;i<=n;i++){
        a=b;
        b=c;
        c=a+b-2; }
    printf("%d",c);
    return 0; }