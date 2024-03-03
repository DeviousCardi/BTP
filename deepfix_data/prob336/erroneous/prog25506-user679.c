#include <stdio.h>
#include <stdlib.h>
int main() {
    if(a+b>c && b+c>a && c+a>b) {
        if((float)((a*a+b*b-c*c)/(2*a*b))>0 || (float)((b*b+c*c-a*a)/(2         *b*c))>0 || (float)((c*c+a*a-b*b)/(2*c*a))>0)
        printf("Acute Triangle");
        else
        printf("Not Acute Triangle"); }
    else
    printf("Cannot form a Triangle");
	return 0; }