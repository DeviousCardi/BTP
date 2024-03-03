#include <stdio.h>
#include <stdlib.h>
int sum=0;
int hanoi(int n) {
    if(n==0)
    return 0;
    if(n==1)
    return 1;
    sum+=hanoi(n-1)*2;
    printf("%d\n",sum);
    return sum; }
int main() {
	hanoi(10);
	return 0; }