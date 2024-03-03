#include <stdio.h>
#include <stdlib.h>
int main() {
    int i,n,j,t;
	int a[20];
	scanf("%d",&n);
	for(i=0;i<n;i++) {
	    scanf("%d",&a[i]); }
	scanf("%d",&t);
	for(j=0;j<t;j++) {
	    scanf("%d",&i);
	    if(i>0) {
	        if(a[i]>a[i-1]&&(a[i]>a[i+1]) {
	            printf("Yes"); }
	        else {
	            printf("No"); } }
	    else if(i=0) {
	        if(a[0]>a[1]) {
                printf("Yes"); }
            else {
                printf("No"); } }
	    printf("\n"); }
	return 0; }