#include <stdio.h>
#include <stdlib.h>
int main() {
    int a,b,c,x;
    scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	if((a>b)&&(a>c)) {
	    x=a; }
	if((b>a)&&(b>c)) {
	    x=b; }
	if((c>a)&&(c>b)) {
	    x=b; }
	if((c>a+b)&&(b>a+c)&&(a>c+b)) {
	    if(x==a) {
	        if((a*a)>(b*b)+(c*c)) {
	            printf("Obtuse Triangle"); }
	        else {
	            printf("Not Obtuse Triangle"); } }
	     if(x==b) {
	        if((b*b)>(a*a)+(c*c)) {
	            printf("Obtuse Triangle"); }
	        else {
	            printf("Not Obtuse Triangle"); } }
	    if(x==c) {
	        if((c*c)>(a*a)+(a*a)) {
	            printf("Obtuse Triangle"); }
	        else {
	            printf("Not Obtuse Triangle"); } } }
	else {
	    printf("Cannot form a Triangle"); }
	return 0; }