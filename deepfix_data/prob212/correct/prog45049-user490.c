#include <stdio.h>
int main(){
    int n,i,s,a;
    scanf("%d",&n);
    a=0;
    for(i=1;n!=0;i=i+1){
        s=(n%10);
        a=a+s;
        n=(n/10); }
    printf("%d",a);
    return 0; }