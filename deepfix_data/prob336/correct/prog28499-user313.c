#include <stdio.h>
#include <stdlib.h>
int main() {
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a>=b&&a>=c) {
        if((b+c>=a)&&(b!=0)&&(c!=0)) {
            if(b^2+c^2<a^2)
                printf("Acute Triangle");
            else
                printf("Not Acute Triangle"); }
        else
            printf("Cannot form a triangle"); }
    if(b>=a&&b>=c) {
        if((a+c>=b)&&(a!=0)&&(c!=0)) {
            if(a^2+c^2<b^2)
                printf("Acute Triangle");
            else
                printf("Not Acute Triangle"); }
        else
            printf("Cannot form a triangle"); }
    if(c>=b&&c>=a) {
        if((b+a>=c)&&(b!=0)&&(a!=0)) {
            if(b^2+a^2<c^2)
                printf("Acute Triangle");
            else
                printf("Not Acute Triangle"); }
        else
            printf("Cannot form a triangle"); }
	return 0; }