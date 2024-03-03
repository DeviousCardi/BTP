#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,i,j;
    scanf("%d",&n);
    for(i=0;i<(2*n+1);i++) {
        for(j=1;j<=(n+1);j++) {
            if(j>(n+1-j)&&(i+j)%2==0) {
                printf("x"); }
            else if(j>(n+1-j)&&(i+j)%2!=0) {
                printf("*"); }
            else {
                printf(" "); } }
        printf("\
	return 0; }