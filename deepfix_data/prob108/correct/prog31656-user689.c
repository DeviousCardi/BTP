#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,k,i;
    scanf("%d",&n);
    i = 1;
    while(n>0) {
        for(k=1;k<=i;k++) {
            if(k==1||k==i) {
                printf("*"); }
            else {
                printf(" "); } }
        printf("\n");
        i++;
        n--; }
	return 0; }