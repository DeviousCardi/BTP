#include <stdio.h>
#include <stdlib.h>
int main() {
    int N,M,temp,num,count=1,maxcount=1;
    scanf("%d", &N);
    M=N;
    scanf("%d", &a);
    num=a;
    while (--M) {
        temp=a;
        scanf("%d", &a);
        if(a==temp) {
            count++;
            if(maxcount<count) {
                maxcount=count;
                num=a; } }
        else
            count=1; }
    printf("%d", num);
	return 0; }