#include <stdio.h>
int main() {
    int a1,a2,n,sum;
    printf("Input the calues of a1,a2 and n respectively");
    scanf("%d %d %d",&a1,&a2,&n);
    if(n>2)
    sum=ser(n);
    else if(n==2)
    sum=a2;
    else if(n==1)
    sum=a1;
    printf("%d",sum);
    return 0; }
int ser(int x) {
    int s=ser(x-1) +ser(x-2) -2;
    return s; }