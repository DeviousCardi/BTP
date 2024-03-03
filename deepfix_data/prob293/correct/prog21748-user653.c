#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,b,c;
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	if((a>=b)&&(a>=c)) {
	    if((b+c)<=a) {
	        printf("cannot form a triangle"); }
	    else if((b*b+c*c)<a*a) {
	     printf("obtuse triangle"); }
	    else {
	        printf("not obtuse triangle"); } }
    else if((b>=a)&&(b>=c)) {
	    if((a+c)<=b) {
	        printf("cannot form a triangle"); }
	    else if((a*a+c*c)<b*b) {
	     printf("obtuse triangle"); }
	    else {
	        printf("not obtuse triangle"); } }
	else {
	    if((a+b)<=c) {
	        printf("cannot form a triangle"); }
	    else if((a*a+b*b)<c*c) {
	     printf("obtuse triangle"); }
	    else {
	        printf("not obtuse triangle"); } }
	return 0; }