#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,b,c,e,f,g;
	scanf("%d %d %d", &a, &b, &c);
	if ((a>=b) & (a>=c)){
	    e=a;
	    f=b;
	    g=c; }
	else {
	    if ((b>a) & (b>=c)){
	        e=b;
	        f=a;
	        g=c; }
	    else {
	        e=c;
	        f=b;
	        g=a; } }
    if (((f+g)<=a) || (a==0) || (b==0) || (c==0))
    printf("Cannot form a Triangle");
    else{
        if ((e*e)>((f*f)+(g*g)))
        printf("Obtuse Triangle");
        else printf("Not Obtuse Triangle"); }
	return 0; }