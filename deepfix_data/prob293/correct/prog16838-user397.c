#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	while((a!=0)&&(b!=0)&&(c!=0)) {
	if(((a+b)<=c)||((b+c)<=a)||((a+c)<=b))
	{printf("Cannot form a Triangle");break;}
	else
	if((a*a)+(b*b)<(c*c))
	{printf("Obtuse Triangle");break;}
	else
	if((a*a)+(b*b)<=(c*c))
	{printf("Not Obtuse Triangle");break;} }
	if((a==0)||(b==0)||(c==0))
	printf("Cannot form a Triangle");
	return 0; }