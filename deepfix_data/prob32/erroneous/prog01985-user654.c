#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,m==0,n;
	int a[20];
	scanf("%d\n",&n);
	for (i=0;i<n;i++) {
	scanf("%d\n",&a[i]); }
if (n==1) {
	    printf("Yes"); }
else{
    if(m==0) {
    if(a[m]<a[m+1]) {
        printf("Yes"); }
    else {
        printf("No"); } }
else if (m==n-1) {
    if( a[m]<a[m-1] ) {
        printf("Yes"); }
    else {
        printf("No"); } }
else {
    if( (a[m]<a[m+1]) && (a[m]<a[m-1]) ) {
        printf("Yes"); }
    else {
        printf("No"); } } }
	return 0; }