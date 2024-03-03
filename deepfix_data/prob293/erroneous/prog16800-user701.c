#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,b,c,s1,s2,s3;
	scanf("%d %d %d",&a,&b,&c);
	if(a>=b&&a>=c)
	{s1=a;s2=b;s3=c;}
	else if(b>=c&&b>=a)
	{s1=b;s2=c;s3=a;}
    else if(c>=a&&c>=b)
    {s1=c;s2=b;s3=a;}
	if !(a+b>c&&b+c>a&&c+a>b)
	printf("Cannot form a triangle");
	else if(pow(s1,2)>=pow(s2,2)+pow(s3,2))
	printf("Obtuse Triangle");
	else
	printf("Not Obtuse Triangle");
	return 0; }