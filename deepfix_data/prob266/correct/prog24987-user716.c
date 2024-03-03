#include <stdio.h>
int main(){
    int n,sum=0;
    scanf("%d",&n);
    while(n!=0){
        sum+=n%10;
        n=n/10; }
    int i=2016;
    while(1){
        if(i%sum==0){printf("%d",i);break;}
        i++; }
    return 0; }