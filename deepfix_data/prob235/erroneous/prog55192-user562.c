#include <stdio.h>
#include <stdlib.h>
int main() {
    for(i=1;i<=n;i++) {
        if(i<=5) {
            for(k=1;k<=5-i;k++)
            printf(" ");
            for(j=5-i+1;j<=5+i-1;j++)
            printf("j");
            printf("\n"); }
        else {
            for(k=6;k<=i;k++)
            printf(" ");
            for(j=(i-5)+1;j<=9-(i-5);j++)
            printf("%d",j);
            printf("\n"); } }
	return 0; }