#include <stdio.h>
#include <stdlib.h>
int main() {
    int i,j,n,k,p;
    scanf("%d",&n);
    p=n/2;
    for(i=0;i<n/2;i++) {
        for(k=0;k<i;k++) {
            printf(" "); }
            for(j=0;j<n-2*i;j++) {
                printf("*"); }
            printf("\n"); }
           for(i=0;i<p+1;i++)
                {for(k=0;k<p-i;k++)
                    {   printf(" "); }
                for(j=0;j<i+1;j++) {
                        printf("*"); }
                    printf("\n"); }
	return 0; }