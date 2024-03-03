#include <stdio.h>
#include <stdlib.h>
int catalan(int n, int m) {
    if(n==1 || n==0)
        return 1;
    else if(m==2)
        return (n+2)/2;
    else
        return (catalan(n, m-1))*(n+m)/(m); }
int main() {
	int i, t, k, m=0;
	scanf("%d", &t);
	printf("%d", catalan(1,1));
	return 0; }