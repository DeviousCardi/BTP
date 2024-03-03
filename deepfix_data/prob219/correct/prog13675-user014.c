#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
    if(a>b&&a>c) {
        if(b>c)
            printf("%d is the second largest no.",b);
        else
            printf("%d is the second largest no.",c); }
    if(b>a&&b>c) {
        if(a>c)
            printf("the second largest no. is % d",a);
        else
            printf(" the second largest no. is %d",c); }
    if(c>a&&c>b) {
        if(b>a)
            printf("second largest no. is %d",b);
        else
            printf("second largest no. is %d",a); }
	return 0; }