#include <stdio.h>
#include <stdlib.h>
int main() {
	int i;
	int size,no_test,index;
	scanf("%d", &size);
	int a[size];
	if(size==1)
	    printf("Yes");
	else {
	    for(i=0; i<size; i++) {
	        scanf("%d",&a[i]); }
	scanf("%d", &no_test);
	for(index=0;index<no_test; index++) {
	    scanf("%d",&i);
	    if (i==0) {
	        if ( a[i]>a[i+1]) {
    	        printf("Yes\n"); }
    	    else printf("No\n"); }
	    else if (i==size-1) {
    	    if ( a[i]>a[i-1]) {
    	        printf("Yes\n"); }
    	    else printf("No\n"); }
	    else if( a[i]>a[i-1] && a[i]>a[i+1] ){
	        printf("Yes\n"); }
	    else printf("No\n"); } }
	return 0; }