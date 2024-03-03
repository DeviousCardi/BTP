#include <stdio.h>
int main() {
    int i,n,j;
    int sum,num;
    sum=0;
    scanf("%d",&i);
    for(i=n;i!=0;i=i%10) {
        num=i%10;
        sum=sum+num; }
    for(j=2016;j%sum!=0;j++) { }
    printf("%d",j);
    return 0; }