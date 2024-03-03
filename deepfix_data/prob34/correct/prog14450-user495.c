#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,n,m,temp, a[20];
	scanf("%d\n",&n);
	for (i=0;i<n;i++) {
	    scanf("%d\n",&a[i]); }
	scanf("%d\n",&m);
	for(i=0;i<m;i++) {
	    scanf("%d",&temp);
	    if(temp!=0 && temp!=n) {
	        if(a[temp]>a[temp-1]&&a[temp]>a[temp+1]) {
	            printf("Yes\n"); }
	        else {
	            printf("No\n"); } }
	    else if(temp==0) {
	        if(a[0]>a[1]) {
	            printf("Yes\n"); }
	        else {
	            printf("No\n"); } }
	    else {
	        if(a[n-1]>a[n-2]) {
	            printf("Yes\n"); }
	        else {
	            printf("No\n"); } } }
	return 0; }