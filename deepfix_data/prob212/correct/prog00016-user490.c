#include <stdio.h>
int main(){
    int n,i,s,a;
    scanf("%d",&n);
    a=0;
    for(i=1;n!=0;i=i+1){
        s=(n%10);
        a=a+s;
        n=(n/10); }
    int b;
    for(b=2016;(b%a)==0;b=b+1){
        printf("%d",b);
            break; }
    return 0; }