#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if(a<b){
	    if(b<c)
	    printf("%d",b);
	    else
	    if(c<a)
	    printf("%d",a);
	    else
	    if(a==c)
	    printf("%d",c);
	    else
	    if(b==c)
	    printf("%d",c);
	    else
	    printf("%d",c); }
	else{
	if(a<c)
	printf("%d",a);
	else
	if(c<b)
	printf("%d",b);
	else
	if(b<c)
	printf("%d",c); }
	return 0; }