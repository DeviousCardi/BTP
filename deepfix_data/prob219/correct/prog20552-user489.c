#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if(a>=b) {
	    if(a!=b) {
	        if(b>=c) {
	            printf("%d",b); }
	        if((b>c)||(c==a&&c!=b)) {
	            printf("%d",b); }
	        if(c>a) {
	            printf("%d",a); } }
	    if(a==b) {
	        if(b>c) {
	            printf("%d",c); }
	        if(c>b) {
	            printf("%d",b); }
	        if(c=b) {
	            printf("%d",c); } } }
	if(b>=a) {
	    if(a!=b) {
	        if(a>=c) {
	            printf("%d",a); }
	        if((a>c)||(c==b&&c!=a)) {
	            printf("%d",a); }
	        if(c>b) {
	            printf("%d",b); } } }
	return 0; }