#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,i,j;
    scanf("%d",&n);
    for(i=1;i<=n;i=i+1) {
        if(i==1) {
            for(j=1;j<2*n;j++)
            {printf("*"); }
            printf("\n"); }
        else {
            for(j=1;j<=2*n-i;j++) {
                if((j==i)||(j==2*n-i))
                {printf("*");}
                else
                {printf(" ");} }
            printf("*\n"); } }
	return 0; }