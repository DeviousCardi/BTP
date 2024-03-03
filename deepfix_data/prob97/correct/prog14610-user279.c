#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++) {
        for(j=1;j<=(2*n-1);j++) {
            if(j>(n+i-1)) continue;
            else {
                if(j<n+1-i)
                printf(" ");
                else
                printf("%d",j%10); } } }
	return 0; }