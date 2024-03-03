#include <stdio.h>
#include <stdlib.h>
int main() {
int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a>=b&&a>=c) {
        if((b+c>a)&&(b!=0)&&(c!=0)) {
            if(b*b+c*c>a*a)
                printf("Acute Triangle");
            else
                printf("Not Acute Triangle"); }
        else
            printf("Cannot form a Triangle"); }
    if(b>=a&&b>=c) {
        if((a+c>b)&&(a!=0)&&(c!=0)) {
            if(a*a+c*c>b*b)
                printf("Acute Triangle");
            else
                printf("Not Acute Triangle"); }
        else
            printf("Cannot form a Triangle"); }
    if(c>=b&&c>=a) {
        if((b+a>c)&&(b!=0)&&(a!=0)) {
            if(b*b+a*a>c*c)
                printf("Acute Triangle");
            else
                printf("Not Acute Triangle"); }
        else
            printf("Cannot form a Triangle"); }
	return 0; }