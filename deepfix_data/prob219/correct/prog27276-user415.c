#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	 if((a<b)&&(b<c)){
	printf("%d",b);}
	else if((c<b)&&(b<a)){
	printf("%d",b);}
	else if((a<c)&&(c<b)){
	printf("%d",c);}
	else if((b<c)&&(c<a)){
	printf("%d",c);}
	else if((b<a)&&(a<c)){
	 printf("%d",a);}
	 else if((c<a)&&(a<b)){
	     printf("%d",a);}
    else if(a==b || b==c ||c==a)
    {if(a==b && b<c) printf("%d",b);
    else printf("%d",c);
        if(b==c && a<c) printf("%d",b);
    else printf("%d",a);
        if(c==a && b<c) printf("%d",c);
        else printf("%d",b); }
	return 0; }