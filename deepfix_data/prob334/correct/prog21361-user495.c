#include <stdio.h>
#include <stdlib.h>
int main() {
	int b,h,i,j,n,m;
	scanf("%d",&h);
	scanf("%d",&b);
    for(i=1;i<=h;i++) {
        for(j=1;j<=h-i+b-(2*(h-i));j++) {
            if(j<=h-i) {
                printf(" "); }
            else {
                for(n=i;n<=h-i+b-(2*(h-i));n++) {
                    m=n%10;
                    printf(""); } } }
        printf("\n"); }
	return 0; }