#include <stdio.h>
#include <stdlib.h>
int f;
void space(int a) {
    for(f=1;f<=a;f++) {
        printf(" "); } }
void star(int b) {
    for(f=1;f<=b;f++) {
        printf("*"); } }
int main() {
	int n,i;
	scanf("%d",&n);
	for(i=1;i<=n;i++) {
	    if(i<=(n+1)/2) {
	  space(((n+1)/2)-i);
	 star(i); }
	    printf("\n"); }
	return 0; }