#include <stdio.h>
#include <stdlib.h>
int Hanoi(int n) {
    if(n==0) {
        return 0; }
else if(n==1) {
    return 1; }
else
return 2*Hanoi(n-1)+1; }
int main() {
int n;
scanf("%d",&n);
printf("%d",Hanoi(10));
	return 0; }