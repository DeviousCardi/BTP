#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,b,c,x,y,z;
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	if (a>b&&a>c&&b>c);x=a;y=b;z=c;
	else if(a>b&&a>c&&c>b),x=a,y=c,z=b;
	else if(b>a&&b>c&&a>c),x=b,y=a,z=c;
	else if(b>a&&b>c&&c>a),x=b,y=c,z=a;
	else if(c>a&&c>b&&a>b),x=c,y=a,z=b;
	else x=c y=b z=a; {
	    if(x<y+z) {
	    if(x*x<y*y+z*z) printf("Acute Triangle");
	    else printf("Not Acute Triangle"); }
	    else printf("Cannot form a Triangle"); }
	return 0; }