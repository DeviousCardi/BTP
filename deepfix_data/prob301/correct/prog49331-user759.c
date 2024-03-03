#include <stdio.h>
#include <stdlib.h>
int main() {
    int N,a,temp,num,count=1,maxcount=1;
    scanf("%d", &N);
    scanf("%d", &a);
    num=a;
    while (--N) {
        temp=a;
        scanf("%d", &a);
        if(temp==a) {
            count++;
            if(maxcount<=count) {
                maxcount=count;
                num=a; } }
        else
            count=1; }
    printf("%d", num);
	return 0; }