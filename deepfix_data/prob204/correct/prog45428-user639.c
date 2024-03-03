#include <stdio.h>
#include <stdlib.h>
int main() {
	int x,y;
	scanf("%d",&x);
	if(x<100){
	y=(x%10)*10+x/10;}
	if(x<1000){
	    y=(x/100)+(x%100)*100+(x/10)%10; }
	if(y==x)
	printf("YES");
	else
	printf("NO");
	return 0; }