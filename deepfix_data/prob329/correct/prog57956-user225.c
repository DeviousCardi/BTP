#include <stdio.h>
#include <stdlib.h>
int main() {
    int x; int y; int z;
    scanf("%d %d %d",&x,&y,&z);
    int a; int b; int c;
    if (x>y) {
        if (x>z) {
                c=x;
             }  else {
                     c=z; } }
    if (( a*a + b*b) == c*c) {
            printf("Right Triangle"); }
        else if ( ( a*a +b*b) != c*c) {
                printf("Not Right Triangle"); }
        else if ( a + b <= c) {
                printf("Cannot form a Triangle"); }
	return 0; }