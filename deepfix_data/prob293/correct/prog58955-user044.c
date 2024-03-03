#include <stdio.h>
int main() {
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if(a*a+b*b<c*c || a*a+c*c<b*b || c*c+b*b<a*a) {
	    printf("Obtuse tringle"); }
	else {
	    if(a+b==c || b+c==a || c+a==b) {
	        printf("Cannot form a tringle"); }
	    else {
	        printf("Not Obtuse tringle"); } }
	return 0; }