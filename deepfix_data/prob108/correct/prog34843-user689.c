#include <stdio.h>
#include <stdlib.h>
int main() {
int n,k,i,l,a;
scanf("%d",&n);
i = 1; a = n;
while(n>0) {
    if(i<=((a+1)/2)) {
        for(k=1;k<=i;k++) {
            if(k==1||k==i) {
                printf("*"); }
            else {
                printf(" "); } } }
    else {
        for(l=1;l<=a+1-i;l++) {
            if(l==1||l==a+1-i) {
                printf("*"); }
            else {
                printf(" "); } } }
    printf("\n");
    i++;
    n--; }
	return 0; }