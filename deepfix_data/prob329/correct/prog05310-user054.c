#include <stdio.h>
#include <stdlib.h>
int main() {
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(((a*a)+(b*b)==(c*c))||((b*b)+(c*c)==(a*a))||((c*c)+(a*a)==(b*b))) {
        printf("Right Traiangle"); }
    else if(a+b>c&&b+c>a&&c+a>b) {
        printf("Not Right Triangle"); }
    else {
        printf("Cannot form a Triangle"); }
	return 0; }