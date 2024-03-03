#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,b,c;
	scanf("%d %d %d ",&a,&b,&c);
    if(a==b) {
	    if(a<c)
	    printf("%d",a);
	    else
	    printf("%d",c); }
	else	if(a==c) {
	    if(a<b)
	    printf("%d",a);
	    else
	    printf("%d",b); }
	else if(b==c) {
	    if(b<a)
	    printf("%d",b);
	    else
	    printf("%d",a); }
	else if(a<b) {
	     if(a<c) {
	         if(c<b)
	         printf("%d",c);
	         else
	         printf("%d",b); }
	     else
	      printf("%d",a); }
	 else {
	      if(b<c) {
	         if(c<a)
	         printf("%d",a);
	         else
	         printf("%d",c); }
	     else
	      printf("%d",b); }
	return 0; }