#include <stdio.h>
int main(){
    int i,n,m;
    scanf ("%d",&n);
    m = (n/1000)+((n%1000)/100)+(((n%1000)%100)/10)+(((n%1000)%100)%10);
    for(i=2016;i>=2016;i++) {
        if(i%m==0)
       break; }
    printf("%d",i);
    return 0; }