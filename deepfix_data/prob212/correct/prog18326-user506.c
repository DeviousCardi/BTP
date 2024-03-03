#include <stdio.h>
int main(){
    int n,i,k,s;
    scanf("%d",&n);
    s=(n%10)+((n%100-n%10)/10)+((n%1000-n%100)/100)+((n-n%1000)/1000);
    for(i=2016;i<=2100;i=i+1) {
        k=i%s;
        if(k==0)
        break; }
    printf("%d",i);
    return 0; }