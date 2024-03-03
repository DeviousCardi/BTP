#include <stdio.h>
#include <stdlib.h>
int main() {
    int n, count, j, i;
    scanf("%d",&n);
    if(n%2!=0) {
        for(i=1; i<=n; i=i++)
        {   count=0;
            for(j=1; j<=5-i; j=j++) {
                printf(" ");
                count=count+1; }
            printf("%d",count%10); } }
	return 0; }