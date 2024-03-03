#include <stdio.h>
#include <stdlib.h>
int main() {
	int storage,i;
	int size,no_test,index;
	scanf("%d", &size);
	int a[size];
	for(i=0; i<size; i++) {
	    storage=getchar();
	    a[i]=storage; }
	scanf("%d", &no_test);
	    scanf("%d",&index);
	    if (index==0) {
	    if ( a[index]>a[index+1]) {
    	        printf("Yes"); }
    	    else printf("No"); }
	    else if (index==size-1) {
    	    if ( a[index]>a[index-1]) {
    	        printf("Yes"); }
    	    else printf("No"); }
	    else if( a[index]>a[index-1] && a[index]>a[index+1] ){
	        printf("Yes"); }
	    else printf("No");
	return 0; }