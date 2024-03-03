#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,n,m,temp;
	char a[20];
	scanf("%d\n",&n);
	for (i=0;i<n;i++) {
	    scanf("%d\n",&a[i]); }
	scanf("%d\n",&m);
	for(i=0;i<m;i++) {
	    scanf("%d",&temp);
	    if(a[temp]!=a[0]&&a[temp]!=a[m]) {
	        if(a[temp]>a[temp-1]&&a[temp]>a[temp+1]) {
	            printf("Yes"); }
	        else {
	            printf("No"); } }
	    else if(a[temp]==a[0]) {
	        if(a[0]>a[1]) {
	            printf("Yes"); }
	        else {
	            printf("No"); } }
	    else if (a[temp]==a[n]) {
	        if(a[n]>a[n-1]) {
	            printf("Yes"); }
	        else {
	            printf("No"); } } }
	return 0; }