#include <stdio.h>
#include <stdlib.h>
int main() {
    int i,j,n,k,m=0,p,l,q,o;
    scanf("%d",&n);
    for(i=1;i<=n;i++) {
        for(k=0;k<m;k++) {
            printf(" "); }
        m++;
            for(j=1;j<=n-(2*(i-1));j++) {
                printf("*"); }
            printf("\n");}
            p=n/2;
            for(l=n;l<=1;l--) {
                for(o=p;o>1;o--) {
                       printf(" "); }
            p--;
                for(q=1;q<=2*n-2*(l-1);q++) {
                        printf("*"); }
                    printf("\n");}
	return 0; }