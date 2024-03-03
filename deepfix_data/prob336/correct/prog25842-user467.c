#include <stdio.h>
#include <stdlib.h>
int main() {
            int a;
            int b;
            int c;
            scanf("%d",&a);
            scanf("%d",&b);
            scanf("%d",&c);
            if ((a<=b+c)&&(b<=a+c)&&(c<=a+b)) {
               if (((a*a<b*b+c*c)&&(a<=b+c))&&((b*b<a*a+c*c)&&(b<a+c))&&((c*c<a*a+b*b)&&(c<=a+b))) {
                    printf("Acute Triangle"); }
            else {
                printf("Not Acute Triangle"); } }
            else {
                   printf("Cannot form a Triangle"); }
	return 0; }