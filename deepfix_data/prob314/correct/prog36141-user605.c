#include <stdio.h>
#include <stdlib.h>
int main() {
int n,t,i,c=0;
scanf("%d",&n);
int a[n];
while(c<n) {
    scanf("%d",&a[c]);
    c=c+1; }
scanf("%d",&t);
c=0;
while(c<t) {
    scanf("%d",&i);
    if(a[i]<a[i+1] && a[i]<a[i-1]) {
        printf("Yes"); }
    else {
        printf("No"); }
    c=c+1;
    printf("\n"); }
	return 0; }