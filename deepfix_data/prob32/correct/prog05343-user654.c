#include <stdio.h>
#include <stdlib.h>
int main() {
	int m,n;
	int a[20];
	scanf("%d\n",&n);
	for (m=0;m<n;m++) {
	scanf("%d\n",&a[m]); }
if (n==1)
	{ printf("Yes");}
else{
    if(m==0) {
    if(a[m]<a[m+1]) {
        printf("Yes"); }
    else {
        printf("No"); } }
else if (m==(n-1)) {
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