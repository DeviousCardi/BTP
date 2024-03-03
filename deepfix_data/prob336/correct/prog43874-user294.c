#include <stdio.h>
#include <stdlib.h>
int main() {
    int x,y,z;
    scanf("%d%d%d",&x,&y,&z);
    if((x+y)<z){
    printf("Cannot form a Triangle"); }
     if((x*x)+(y*y)>(z*z)){
        printf("Acute Triangle"); }
    else if((x*x)+(y*y)<(z*z)){
        printf("Not Acute Triangle"); }
	return 0; }