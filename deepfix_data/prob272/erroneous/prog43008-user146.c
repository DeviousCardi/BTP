#include <stdio.h>
int main(){
    int a,b,n,c,i;
    scanf("%d%d%d",&a,&b,&n);
    c=a+b-2;
    if(n=1)
    printf("%d",a);
    else if(n==2)
    printf("%d",d);
    else if(n==3)
    printf("%d",c);
    else if(n>3){
    for(i=1;i<=n-3;i++){
        a=b;
        b=c;
        c=a+b-2; }
    printf("%d",c); }
    return 0; }