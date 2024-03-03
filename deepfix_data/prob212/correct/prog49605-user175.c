#include <stdio.h>
int main(){
    int n,i,a[4],sum=0,d;
    scanf("%d",&n);
    for(i=0;i<4;i++) {
        a[i]=n%10;
        n=n/10;
        sum=sum+a[i]; }
    i=2016;
    while(i%sum!=0) {
        i++; }
    printf("%d",i);
    return 0; }