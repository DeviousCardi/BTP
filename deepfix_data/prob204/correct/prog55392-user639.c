#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
	int x,y;
	scanf("%d",&x);
	if(x/10<=9 && x>0){
	y=(x%10)*10+x/10;}
	if(x/10<=99&& x>10){
	    y=(x/100)+(x%10)*100+((x/10)%10)*10; }
	if(x/10<pow(10,6)&&x>pow(10,5)) {
	    y=(x%10)*1000000+(x/1000000)+((x/100000%10)*10)+((x/10000)%10)*100+((x/1000)%10)*1000+((x/100)%10)*10000+((x/10)%10)*100000; }
	if(y==x)
	printf("YES");
	else
	printf("NO");
	return 0; }