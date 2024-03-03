#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,i,lines,spaces;
	  scanf("%d",&a);
    for(i=1;i<=2*a-1;i=i+1){
        printf("*"); }
     printf("\n");
    for(spaces=1;spaces<=lines;spaces++){
        printf(" "); }
	return 0; }