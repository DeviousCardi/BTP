#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,b,c,temp;
	scanf("%d %d %d \n");
	if(b>=a&&b>=c) {
	 temp =b;
	 b=a;
	 a=temp; }
	else if(c>=b&&c>=a) {
	 temp=c;
	 c=a;
	 a=temp; }
	if((((a+b)>c)&&((c+b)>a)&&((a+c)>b))!)
     printf("Cannot form a Triangle");
     else {
     if((b*b)+(c*c)>(a*a))
     printf("Acute Triangle");
     else printf("Not Acute Triangle"); }
	return 0; }