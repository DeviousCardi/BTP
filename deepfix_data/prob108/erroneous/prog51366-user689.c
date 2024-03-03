#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,k,i;
    scanf("%d",&n);
    i = 1;
    while(n>0) {
        if(i<=(n+1)/2) {
            for(k=1;k<=i;k++) {
               if(k==1||k==i) {
                   printf("*"); }
            else {
                printf(" "); } } }
        else {
            for(l=1;l<=n+1-i;k++) {
                if(k==1||k==n+1-i) {
                    printf("*"); }
                else {
                    printf(" "); } } }
        printf("\n");
        i++;
        n--; }
	return 0; }