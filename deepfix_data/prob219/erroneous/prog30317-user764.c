#include <stdio.h>
#include <stdlib.h>
int main() {
	int a;int b; int c;
	scanf("%d%d%d",&a,&b,&c);
	if(a==b){if(b>=c) {printf("%d",c);}}
   else	if(a>b){if(b>=c)
	{printf("%d",b);}
   else	if(b<c){if(a<c)
	{printf("%d",a);} if(a==c){printf("%d",b);}
	else {printf("%d",c);}
	}}
	else if(a<b){if(b>c){if(c>a){printf("%d",c);}
	else {printf("%d",a);} }{if(b==c){printf("%d",a);}}
	else if(b<c){printf("%d",b);}}
	return 0; }