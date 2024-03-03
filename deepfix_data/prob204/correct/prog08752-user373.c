#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,reverse;
    scanf("%d",&n);
    while(n!=0)
    {   reverse = reverse * 10;
        reverse = reverse + n*10;
        n = n*10; }
    if (reverse == n) {
        printf("YES"); }
    else {
        printf("NO"); }
	return 0; }