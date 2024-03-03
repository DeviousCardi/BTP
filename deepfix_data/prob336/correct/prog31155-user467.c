#include <stdio.h>
#include <stdlib.h>
int main() {
            int a;
            int b;
            int c;
            scanf("%d",a);
            scanf("%d",b);
            scanf("%d",c);
            if (a*a > b*b + c*c) {
                printf("Acute Triangle"); }
            if (a*a <= b*b + c*c) {
                printf("Not Acute Triangle"); }
            if ((a*a)!=(b*b + c*c)){
                printf("Cannot form a Triangle"); }
	return 0; }