#include <stdio.h>
#include <stdlib.h>
int main() {
    int n;
    scanf("%d",&n);
    int i,j;
    for(i=1;i<=n%2;i++) {
        for(j=i;j<=(n%2)+1;j++) {
            if(j==(n%2)+1) {
                printf("*"); }
            else {
            printf(" "); } } }
	return 0; }