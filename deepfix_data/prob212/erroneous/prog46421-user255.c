#include <stdio.h>
int main(){
    int n , y , j=0 , i=0 , sum=0;
    scanf("&d",&n);
    while (n) {
        a[i]=n%10;
        ++i;
        sum = sum + a[i];
        n=n/10; }
    for (y=2016 ; y%sum!=0 ; y++ );
    printf("%d",y);
    return 0; }