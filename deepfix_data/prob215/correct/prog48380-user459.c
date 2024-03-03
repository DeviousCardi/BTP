#include <stdio.h>
#include <stdlib.h>
int main() {
    int i,n,j=0;
    scanf("%d",&n);
    for(i=1;i<=n/2;i++) {
        if(n%i==0) {
            j=j+i; } }
    if(j==i)
    printf("YES");
    else
    printf("NO");
	return 0; }