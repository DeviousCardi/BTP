#include <stdio.h>
#include <stdlib.h>
int main() {
    int i,j,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)  {
    for(j=1;j<=(n+1)/2;j++)  {
        if (i<=(n+1)/2) {
            if (j==1  || j==i  )  {
                printf("*"); }
                else  {
        printf(" "); } }
    else {
        if (j==1 &&  j==n+1-i )
  printf("*");
        else
            printf(" "); } }
    printf("\n"); }
	return 0; }