#include <stdio.h>
#include <stdlib.h>
int main() {
int a, b, c;
scanf("%d%d%d",&a,&b,&c);
if(a+b>c&&b+c>a&&c+a>b) {
    if((a>=b&&a>=c&&b*b+c*c<a*a)||(b>=c&&b>=a&&c*c+a*a<b*b)||(c>=a&&c>=b&&a*a+b*b<c*c))
    printf("Not Acute Triangle");
    else
     printf("Acute Triangle");
     else
      printf("Cannot form a Triangle"); }
	return 0; }