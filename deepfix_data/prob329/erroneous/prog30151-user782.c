#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,b,c;
	if (!(a+b>c) || !(b+c>a) || !(c+a>b))  {
	    printf ("Cannot form a Triangle"); }
	else if  (a>b){
	    if  (a>c){
	       if (a*a=b*b+c*c){
	            printf ("Right Triangle");
	           } else {
	                printf ("Not Right Triangle"); } } } }
	else if  (b>a){
	    if   (b>c){
	        if (b*b=a*a+c*c){
	            printf ("Right Triangle");
	        } else {
	            printf ("Not Right Triangle"); } } }
	else if (c>a){
	    if(c>b)	{
	        if (c*c=a*a+b*b);{
	            printf ("Right Triangle");
	        } else {
	            printf ("Not Right Triangle"); } }
	}return 0; }