#include <stdio.h>
int main(){
    int n,remainder,sum=0,z;
    scanf("%d",&n);
    while(n!=0){
        remainder=n%10;
        sum+=remainder;
        n=n/10; }
    z=2016;
    while(1){
        if(z%sum==0){
            break; }
        z+=1; }
    printf("%d",z);
    return 0; }