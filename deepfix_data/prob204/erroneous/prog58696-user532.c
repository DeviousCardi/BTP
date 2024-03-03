#include <stdio.h>
#include <stdlib.h>
int main() {
	int a;
	char b[20];
	scanf("%d",&a);
	if(!a) {
	    printf("YES");
	    return 0; }
	while(a) {
	    b[i]=a%10;
	    i++;
	    a=a/10; }
	int flag=0;
	for(x=0;x<=i/2;x++) {
	    if(b[x]!=b[i-x])
	        flag=1; }
	if(flag)
	    printf("NO");
	else
	    printf("YES");
	return 0; }