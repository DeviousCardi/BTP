#include <stdio.h>
#include <stdlib.h>
int main() {
    int x,y,z;
    scanf("%d%d%d",&x,&y,&z);4 ;
    if((x*x)+(y*y)>(z*z)){
        printf("Acute Triangle"); }
    else if((x*x)+(y*y)<(z*z)){
        printf("Not Acute Triangle"); }
        else{
        printf("Cannot form a Triangle"); }
	return 0; }