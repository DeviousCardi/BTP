#include <stdio.h>
#include <stdlib.h>
int isPalin(int n) {
    int temp, last_dig, num2=0;
    while(temp>0) {
        last_dig=temp%10;
        num2=num2*10+last_dig;
        temp=temp/10; }
    if(num2==n)
        return 1;
    else
        return 0; }
int main() {
	return 0; }