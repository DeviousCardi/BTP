#include <stdio.h>
#include <stdlib.h>
int main() {
    int i,s=0.0;
    float a[5];
    for(i=0;i<5;i++) {
        scanf("%f",&a[i]); }
    for(i=0;i<5;i++) {
        s=s+ a[i]; }
    printf("%f",s);
	return 0; }