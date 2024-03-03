#include <stdio.h>
#include <stdlib.h>
int main() {
    int a,b,c,n;
scanf("%d %d %d",&a,&b,&c);
if (a>=b) {
       if (a>=c) {
	   n=a; }
       else {
	        n=c; } }
else {
        if (b>=c)  {
	          n=b; }
        else {
	         n=c; } }
if(n==a)
{ if(n>=b+c)
    printf("Cannot form a triangle");
else
if(n*n==b*b+c*c)
    printf("Right Triangle");
else
    printf("Not Right Triangle"); }
else
  if(n==b)
{ if(n>=a+c)
    printf("Cannot form a triangle");
else
if(n*n==a*a+c*c)
    printf("Right Triangle");
else
    printf("Not Right Triangle"); }
else
if(n==c)
{ if(n>=b+a)
    printf("Cannot form a triangle");
else
if(n*n==b*b+a*a)
    printf("Right Triangle");
else
    printf("Not Right Triangle"); }
	return 0; }