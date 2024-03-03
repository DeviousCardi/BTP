#include <stdio.h>
int main(){
    int n,i,s,a;
    scanf("%d",&n);
    a=0;
    for(i=1;n!=0;i=i+1){
        s=(n%10);
        a=a+s;
        n=(n/10); }
    int k=2016,b;
    if(k>n){
        for(b=1;(k%a)==0;b=b+1){
            printf("%d",k);
            break; } }
    else {
        for(b=1;(k%a)==0;b=b+1){
            printf("%d",k);
            break; } }
    return 0; }