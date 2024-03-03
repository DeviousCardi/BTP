#include <stdio.h>
#include <stdlib.h>
int main() {
	int x,y,z;
	scanf("%d",&x);
	if(x/10<=9 && x>0){
	y=(x%10)*10+x/10;}
	if(x/100<=9&& x>0){
	    z=(x/10)%10;
	    y=(x/100)+(x%100)*100+z*10; }
	if(y==x)
	printf("YES");
	else
	printf("NO");
	return 0; }