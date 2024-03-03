#include <stdio.h>
int main(){
    int n , y , a , j=0 , i=0 , sum=0;
    scanf("%d",&n);
    while (n) {
        a=n%10;
        sum = sum + a;
        n=n/10; }
    for (y=2016 ; y%sum != 0 ; y++ );
    printf("%d",y);
    return 0; }