#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if(a>=b) {
	    if(a==b) {
	        if(b>c) {
	            printf("%d",c); }
	        if(c>b) {
	            printf("%d",b); }
	        if(c=b) {
	            printf("%d",c); } } }
	if(b>a) {
	        if(a>=c) {
	            printf("%d",a); }
	        if(c==b) {
	            printf("%d",a); }
	        if(c>b) {
	            printf("%d",b); }
	        if(b>c&&c>a) {
	            printf("%d",c); } }
	return 0; }