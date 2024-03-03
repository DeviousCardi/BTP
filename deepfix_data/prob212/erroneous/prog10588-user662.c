#include <stdio.h>
int main() {
    int n,i;
    int sum=0;
    scanf("%d",&n);
    while(n) {
        sum=sum+n%10;
        n=n/10; }
        printf("%d",sum);
        for(i=2016;i<=2016+28;i++) {
            if(i%n==0) {
                printf("lucky year")
            }else{
                printf("unlucky year") } }
    return 0; }