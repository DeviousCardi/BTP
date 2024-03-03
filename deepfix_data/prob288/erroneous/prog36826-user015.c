#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,i,j;
    scanf("%d",&n);
    for(i=1;i<=n+1;i=i+1) {
        for(j=1;j<=n+1;j=j+1) {
            if(j<=n+1-i)
            {printf(" "); }
            else if((i+j)%2!=0)
            {printf("x"); }
            else if((i+j)%2==0)
            {printf("*"); }
            printf("\n"); } } }
	return 0; }