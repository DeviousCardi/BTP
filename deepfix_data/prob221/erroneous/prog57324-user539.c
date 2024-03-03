#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
int i,n,j,p;
scanf("%d",&n);
    for(i=1;i<=n;i++)
    {for(j=1;j<=n*2-1;j++) {
        if(j=1) {
            printf("*"); }
        else if(2<=j<=2*n-1) {
            if((j==i)||(j==2*n-1)) {
                printf("*"); }
            else  {
                printf(" "); } }
     printf("\n"); }
	return 0; }