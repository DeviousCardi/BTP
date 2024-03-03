#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,i;
	  scanf("%d",&a);
    for(i=1;i<=2*a-1;i=i+1){
        printf("*"); }
     printf("\n");
    for(i=1;i<=a;i=i+1){
       printf("*"); }
     printf("\n");
	return 0; }