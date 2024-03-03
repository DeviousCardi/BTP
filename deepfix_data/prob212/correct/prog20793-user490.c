#include <stdio.h>
int main(){
    int n,i,s,a;
    scanf("%d",&n);
    a=0;
    i=1;
    for(i<=4;n!=0;i=i+1){
        s=(n%10);
        a=a+s; }
    printf("%d",a);
    return 0; }