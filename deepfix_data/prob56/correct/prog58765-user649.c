#include <stdio.h>
#include <stdlib.h>
float catalan(int n, int m) {
    if(n==1 || n==0)
        return 1;
    if(m==2)
        return (n+2)/2;
    else
        return (catalan(n, m-1))*(n+m)/(m); }
int main() {
	int i, t, k, m=0;
	scanf("%d", &t);
	printf("%d", (int)catalan(3,3));
	return 0; }