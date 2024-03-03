#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,d,a,c=0;
	scanf("%d",&n);
	d=n;
	while(n>0){
	    a=n%10;
	    n=n/10;
	    c= c*10+a;
	}if(c==d)
	{printf("YES"); }
	else{
	    print("NO") }
	return 0; }