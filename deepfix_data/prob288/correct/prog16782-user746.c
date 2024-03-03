#include <stdio.h>
#include <stdlib.h>
int main() {
    int n;
    scanf("%d", &n);
    int i,j;
    for (i=0; i<n+1; i++) {
        for(j=0;j<=i;j++)
        {printf(" ");}
        for (j=0; j<=i;j++) {
            if((i+j)%2==0) {
                printf("X"); }
            else
            printf("*"); }
        printf("\n"); }
    for (i=n;i>0;i--) {
        for(j=i;j>0;j--)
        {printf(" ");}
        for(j=i;j>0;j--) {
            if((i+j)%2==0) {
                printf("X"); }
            else
            printf("*"); }
        printf("\n"); }
	return 0; }