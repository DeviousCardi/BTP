#include <stdio.h>
#include <stdlib.h>
int main() {
    int a,b,i,j;
    scanf("%d",&a);
    for(i=1;i<=((a+1)/2);i++) {
        for(j=1;j<i;j++) {
            printf(" "); }
        for(b=1;b<=a-2*i+2;b++) {
            printf("*"); }
        printf("\n"); }
    for(i=((a+3)/2);i<=a;i++) {
        for(j=((a+3)/2);j>0;j--) {
            printf(" "); }
        for(b=1;b<=2*i-a;b++) {
            printf("*"); }
        printf("\n"); }
	return 0; }