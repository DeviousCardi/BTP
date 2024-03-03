#include <stdio.h>
#include <stdlib.h>
int main() {
	int i = 1,num,sum = 0;
	scanf("%d",&num);
	i=num/2;
	while(i>=1){
	    if(num%i == 0)
	        sum = sum + i;
	    if(sum>num) break;
	    i--; }
	if(num == sum)
	    printf("YES");
	else
	    printf("NO");
	return 0; }