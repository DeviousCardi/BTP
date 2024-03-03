#include <stdio.h>
#include <stdlib.h>
int main() {
int i,n,j,p;
scanf("%d",&n);
    for(p=1;p<=n;p++)
    {for(i=1;i<=n*2-1;i++) {
        printf("*");
        for(i=2;i<=2*n-1;i++) {
            if((j==i)||(j==2*n-1-i)) {
                printf("*"); }
            else {printf(" ");} } }
     printf("\n"); }
	return 0; }