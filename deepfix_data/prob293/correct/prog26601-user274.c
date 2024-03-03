#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,b,c,x,y,z;
	scanf("%d%d%d",&a,&b,&c);
	    if((a>=b)&&(b>=c)) {
	        x=a;
	        y=b;
	        z=c; }
	    else {
          if((b>=a)&&(a>=c))
	      { x=b;
	       y=a;
	       z=c; }
	else {
	    x=c;
	    y=a;
	    z=b;
	 }   }
	if(x<(y+z)) {
	 if(x*x<((y*y)+(z*z))) {
	     printf("Obtuse Triangle"); }
	 else{
	     printf("Not Obtuse Triangle");
	 }}
	 else {
	     printf("Cannot form a Triangle"); }
	return 0; }