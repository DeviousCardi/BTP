#include <stdio.h>
#include <stdlib.h>
unsigned long int catalan(int i) {
    if (n <= 1) return 1;
    unsigned long int res = 0;
    for (int i=0; i<n; i++)
        res += catalan(i)*catalan(n-i-1);
    return res; }
int main() {
    int t,a=0;
    unsigned int n;
    scanf("%d",&t);
    for(i=0;i<t,n<17;i++) {
        scanf("%d",&n);
        if(n==catalan(i))
        printf("Yes");
        else a++; }
	return 0; }