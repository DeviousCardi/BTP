#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
    int a,b,c,longest,x,y;
	scanf(" %d%d%d",&a,&b,&c);
	if(((a+b)>c)&&((b+c)>a)&&((a+c)>b)) {
	    if(a>b) {
	        if(a>c)
	       { longest=a;x=b;y=c; }
	        else
	        {longest=c;x=a;y=b; } }
	    else if(b>a) {
	        if(b>c)
	        {longest=b;x=a;y=c; }
	        else
	       { longest=c;x=a;y=b; } }
	    if(x*x+y*y>longest*longest) {
	        printf("acute triangle"); }
	    else if(x*x+y*y<=longest*longest) {
	        printf("not acute triangle"); } }
	else {
	    printf("cannot form triangle"); } }