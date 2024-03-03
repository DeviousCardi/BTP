#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if(a>=b) {
        if(b>=c)
        printf("%d",b);
        if(c>=b) {
            if(a>=c)
            printf("%d",c);
            if(c>=a)
            printf("%d",a); } }
    if(b>=a) {
        if(a>=c)
        printf("%d",a);
        if(c>=a) {
            if(b>=c)
            printf("%d",c);
            if(c>=b)
            printf("%d",b); } }
	return 0; }