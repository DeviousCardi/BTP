#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
    int i,j,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++) {
        for(j=1;j<=n-(abs((n+1)/2-i));j++) {
            if(j<=(abs(((n+1)/2)-i)))
            printf(" ");
            else
            printf("%d",j%10); }
        printf("\n"); }
	return 0; }