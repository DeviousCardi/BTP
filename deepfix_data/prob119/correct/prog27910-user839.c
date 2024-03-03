#include <stdio.h>
#include <stdlib.h>
int s=0;
int hanoi(int n) {
        if(n==1) {
                s++;
                return s; }
        else {
                s=s+hanoi(n-1);
                return s; } }
int main() {
    int n;
    scanf("%d",&n);
    printf("%d",hanoi(n));
	return 0; }