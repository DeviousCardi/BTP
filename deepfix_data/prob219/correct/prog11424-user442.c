#include <stdio.h>
#include <stdlib.h>
int main() {
    int a,b,c;
    if(a>=b) {
        if(c>=a) {
            printf("%d",a); }
        else if(c>=b) {
            printf("%d",c); }
        else
        printf("%d",b); }
    else { {
        printf("%d",b); }
        if(c>=a) {
            printf("%d",c); }
        else
        printf("%d",a); }
	return 0; }