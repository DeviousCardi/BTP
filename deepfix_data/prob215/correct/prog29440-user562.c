#include <stdio.h>
#include <stdlib.h>
float sum_divisor(int num1) {
    int i;
    float sum1=0.0;
    for(i=1 ; i<(num1/2)+1 ; i++) {
        if(num1%i==0)
        sum1=sum1+i; }
    return sum1; }
int main() {
    int num;
    float sum;
    scanf("%d ",&num);
    sum=sum_divisor(num);
    if(sum==num)
    printf("YES");
    else
    printf("NO");
	return 0; }