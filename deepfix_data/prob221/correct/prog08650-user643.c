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
            for(k=1;k<i;k++)
                printf("%c",' ');
            printf("%c",'*');
            for(k=i+1;k<2*n-1;k++)
                printf("%c",' ');
            printf("%c",'*'); }
         printf("\n"); }
    return 0; }