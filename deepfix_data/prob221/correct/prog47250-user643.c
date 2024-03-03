#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j,n,k;
	scanf("%d",&n);
	for(i=1;i<=n;i++) {
	    if(i == 1) {
            for(j=1;j<=2*n-1;j++) {
                printf("*"); } }
        else {
            for(k=1;k<=2*n-1;k++) {
                if(k == i || k == 2*n-1-i+1)
                    printf("%c",' ');
                else
                    printf("%c",'*'); } }
         printf("\n"); }
    return 0; }