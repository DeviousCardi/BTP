#include <stdio.h>
#include <stdlib.h>
  int main () {
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if(((a+b)>c)&&((b+c)>a)&&((c+a)>b)) {
	    if((a<c)&&(b<c))
	        if(((a*a)+(b*b))>(c*c)) {
	            printf("Acute Triangle"); }
	        else {
	            printf ("Not Acute Triangle"); }
	    else if((a<b)&&(c<b))
	        if(((a*a)+(c*c))>(b*b)) {
	            printf("Acute Triangle"); }
    	    else {
    	        printf("Not Acute Triangle"); }
	    else if((b<a)&&(c<a))
	        if(((b*b)+(c*c))>(a*a)) {
	            printf("Acute Triangle"); }
	        else {
	            printf("Not Acute Triangle"); } }
    else {
        printf("Cannot form a Triangle"); }
	return 0; }