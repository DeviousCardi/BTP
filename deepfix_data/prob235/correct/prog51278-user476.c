#include <stdio.h>
#include <stdlib.h>
int main() {
    int i,j,n,num;
    scanf("%d",&n);
    for(i=0;i<(n+1)/2;i++) {
        for(j=0;j<(n-1)/2-i;j++) {
            printf(" "); }
        num=(n+1)/2-i;
        for(j=0;j<(2*i+1);j++) {
            printf("%d",num%10);
            num =num+1; }
        printf("\n"); }
    for(i=0;i<(n-1)/2;i++) {
        for(j=0;j<=i;j++) {
            printf(" "); }
        num=2+i;
        for(j=0;j<(n-2)-2*i;j++) {
            printf("%d",num%10);
            num = num+1; }
        printf("\n"); }
	return 0; }