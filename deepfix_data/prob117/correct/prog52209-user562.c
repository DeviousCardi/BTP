#include <stdio.h>
#include <stdlib.h>
int hanoi(int n,char a,char c,char b) {
    int k;
    if(n==0) return ;
    k=hanoi(n-1,a,b,c);
    k++;
    k=k+hanoi(n-1,b,c,a);
    return k; }
int main() {
	printf("%d",hanoi(3,'a','b','c')); }