#include <stdio.h>
#include <stdlib.h>
int main() {
    int sum=0,num,i;
    scanf("%d\n",&num);
    for(i=1;i<=num/2;i++) {
        if(num%i==0)
            sum+=i; }
    if(sum==num)
        printf("YES");
    else
        printf("NO");
	return 0; }