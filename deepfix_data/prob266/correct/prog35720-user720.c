#include <stdio.h>
int main(){
    int a,b,c,e,g,sum,y;
    scanf("%d",&a);
    b=a%10;
    c=(a%100)/10;
    e=(a%1000)/100;
    g=(a/1000);
    sum=b+c+e+g;
    for(y=2016; ;y=y+1){
        if(y%sum==0){
            break;} }
    printf("%d",y);
    return 0; }