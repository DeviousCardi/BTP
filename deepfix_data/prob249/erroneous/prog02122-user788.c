#include <stdio.h>
#include <stdlib.h>
int f;
void space(int a) {
    for(f=1;f<=a;f++) {
        printf(" "); }
void star(int b){
    for(f=1;f<=b;f++)
    printf("*"); }
int main() {
	int n,i;
	scanf("%d",&n);
	for(i=1;i<=n;i++) {
	    if(i<=(n+1)/2) {
	  space(((n+1)/2)-i);
	 printf("*");
if(i>1&&i<n) {
    space(i-2);
    printf("*"); } }
	   if(i>=(n+3)/2) {
	       space(i-(n+1)/2);
printf("*");
space(n-1-i); }
	   if(i>=(n+3)/2&&i<n){
	       printf("*"); }
	    printf("\n"); }
	return 0; }