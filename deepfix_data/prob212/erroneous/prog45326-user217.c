#include <stdio.h>
int main(){
    int n;
    int i;
    scanf("%d",n);
    int a,b,c,d;
    d=n%10;
    c=(n/10)%10;
    b=(n/100)%10;
    a=n/1000;
    for(i=2016;i>=2016;i=i+1){
        if(i%(a+b+c+d)==0){printf("%d",i) }
    return 0; }