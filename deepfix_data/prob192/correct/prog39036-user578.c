#include <stdio.h>
#include <stdlib.h>
int main() {
	int num,r,c,sp;
  scanf("%d",&num);
  for(r=1; r<=(num+1)/2; r++) {
    for(sp=num-(r+1); sp>=1; sp--)
 printf(" ");
    for(c=1; c<=r; c++)
        printf("*");
    for(c=r-1; c>=1; c--)
        printf("*");
    printf("\n"); }
  for(r=(num+1)/2; r<=num; r++) {
    for(sp=(r+1); sp>=1; sp--)
        printf(" ");
    for(c=1; c<=(num-r); c++)
        printf("*");
    for(c=num-r-1; c>=1; c--)
        printf("*");
    printf("\n"); }
	return 0; }