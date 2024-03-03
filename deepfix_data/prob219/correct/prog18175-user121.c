#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if(a<b){
	    if(b<c)
	    printf("b");
	    else
	    if(c<a)
	    printf("a");
	    else
	    printf("c"); }
	else{
	if(a<c)
	printf("a");
	else
	if(c<b)
	printf("c");
	else
	if(b<c<a)
	printf("c"); }
	return 0; }