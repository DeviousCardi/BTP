#include <stdio.h>
#include <stdlib.h>
int main() {
    int n;
    int i,j;
    int count=0;
    scanf("%d",&n);
    for(i=1;i<=n+1;i++) {
        for(j=1;j<=i;j++) {
            if(count%2==0) {
                printf("*"); }
            else {
                printf("x"); }
            count++; }
        printf("\n");
        count=0; }
    for(i=n;i>=1;i--) {
        for(j=i;j>=1;j--) {
            if(count%2==0) {
                printf("*"); }
            else {
                printf("x"); }
            count++; }
        printf("\n");
        count=0; }
	return 0; }