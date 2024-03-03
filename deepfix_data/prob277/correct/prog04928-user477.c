#include <stdio.h>
#include <stdlib.h>
int main() {
    int i,j,n,k,m=0,p;
    scanf("%d",&n);
    p=n/2;
    for(i=1;i<=n;i++)
    {   if(i<=(n/2)) {
        for(k=0;k<m;k++) {
            printf(" "); }
        m++;
            for(j=1;j<=n-(2*(i-1));j++) {
                printf("*"); }
            printf("\n"); }
            else {
                for(k=1;k<=p;k++) {
                       printf(" "); }
                p--;
                for(j=i;j<n;j++) {
                        printf("*"); }
                    printf("\n");
            }}
	return 0; }