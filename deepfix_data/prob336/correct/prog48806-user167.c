#include <stdio.h>
#include <stdlib.h>
int main() {
	int a; int b; int c;
	scanf("%d%d%d",&a,&b,&c);
	if((a+b<c)||(b+c<a)||(c+a<b)) {
	    printf("cannot form a traingle"); }
else {
    if ((a*a)+(b*b)>(c*c)) {
        printf("acute traingle"); }
     if((a*a)+(b*b)<=(c*c))
{ printf("not acute traingle"); } }
	return 0; }