#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,i,sum=1;
    scanf("%dl",&n);
    for(i=2;i<n;i++) {
        if(n%i==0) {
            sum=sum+i; } }
    if(sum==n)
    printf("YES");
    else
    printf("NO");
	return 0; }