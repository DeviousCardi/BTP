#include <stdio.h>
#include <stdlib.h>
int main() {
    int x;
    scanf("%d",&x);
    int y;
    scanf("%d",&y);
    int z;
    scanf("%d",&z);
    if((x*x)+(y*y)>=(z*z))
        printf("Acute Triangle");
    if((x*x)+(y*y)<=(z*z))
        printf("Not Acute Triangle");
    else{
        printf("Cannot form a Triangle"); }
	return 0; }