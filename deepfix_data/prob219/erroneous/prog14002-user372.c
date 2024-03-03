#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	 if(a==b||b==c||c==a) {
        if(a==b) {
            if(a>=c)
            printf("%d",c);
            else printf("%d",a); }
        else if(a==c) {
            if(a>=b)
            printf("%d",b);
            else printf("%d",a); }
        else if(b==c) {
            if(b>=a)
            printf("%d",a);
            else printf("%d",b);
        }}
        else { {
                if((a>=b)&&(c>=a))
            printf("%d",a);
            else if((a>=b)&&(c>=b))
            printf("%d",c);
            else if(a>=b)
            printf("%d",b); } {
                if((a<=b)&&(c>=b))
                printf("%d",b);
                else if((a<=b)&&(c>=a))
                printf("%d",c);
                else if(a<=b)
                printf("%d",a);
	return 0; }