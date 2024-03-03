#include <stdio.h>
#include <stdlib.h>
int main() {
    int n, count, j, i;
    scanf("%d",&n);
    if(n%2!=0) {
        for(i=1; i<=n; i=i++)
        {   count=1;
            for(j=1; j<=(n+1)*0.5-i; j=j++) {
                printf(" ");
                count=count+1; }
            for(k=1; k<=i; k=k++) {
                c=count-1;
                printf("%d\n",c%10); } } }
	return 0; }