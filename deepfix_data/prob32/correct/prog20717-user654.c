#include <stdio.h>
#include <stdlib.h>
int main() {
	int  i,n;
	int a[20];
	scanf("%d\n",&n);
	for (i=0;i<n;i++) {
	scanf("%d\n",&a[i]); }
	if (n==1)
	{ printf("Yes");}
else{
    if(i==1) {
    if(a[i]<a[i+1]) {
        printf("Yes"); }
    else {
        printf("No"); } }
else if (i==n-1) {
    if( a[i]<a[i-1] ) {
        printf("Yes"); }
    else {
        printf("No"); } }
else {
    if( (a[i]<a[i+1]) && (a[i]<a[i-1]) ) {
        printf("Yes"); }
    else {
        printf("No"); } } }
	return 0; }