#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int sum=0;
    while(n!=0) {
        int r=n%10;
        sum=sum+r;
        n=n/10; }
    int i=2016;
    while(i%sum!=0)
    i++;
    printf("%d",i);
    return 0; }