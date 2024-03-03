#include <stdio.h>
#include <stdlib.h>
int main() {
    int x,y,z;
    scanf("%d%d%d",&x,&y,&z);
    if ((x+y)>z)
    if ((x*x)+(y*y)>=(z*z)){
        printf("Acute Triangle"); }
     else {
        printf("Not Acute Triangle"); }
    else printf("Cannot form a Triangle");
	return 0; }