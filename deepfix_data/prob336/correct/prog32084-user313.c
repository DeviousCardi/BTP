#include <stdio.h>
#include <stdlib.h>
int main() {
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a>=b&&a>=c) {
        if((b+c>=a)&&(b!=0)&&(c!=0)) {
            if(b^2+c^2<=a^2)
                printf("Acute Angle");
            else
                printf("Not Acute Angle"); }
        else
            printf("Cannot form a triangle"); }
	return 0; }