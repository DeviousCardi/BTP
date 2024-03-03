#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,m=0,p;
    scanf("%d", &n);
    p=n;
    while(n) {
        m=m*10 + n%10;
        n/=10; }
    if(m==p)
        printf("YES");
    else
        printf("NO");
	return 0; }