#include <stdio.h>
int main() {
	int d,n;
	scanf("%d %d",&d,&n);
	int b[d];
	int a=0;
	int i=0;
	while(i<=d-1){
	    scanf("%d",&b[i]);
	    i++; }
	for(i=0;i<=d-1;i++){
	    a=a+b[i]; }
	printf("%d",a);
	return 0; }