#include <stdio.h>
#include <stdlib.h>
int main() {
    int num;
    scanf("%d",&num);
    int i;
    for (i=0;i<=num-1;i++) {
        int j;
        for (j=1;j<=2*num-1;j++) {
            if (j==num-i||j==num+i) {
                printf("*"); }
            else {
                printf(" "); } }
        printf("\n"); }
   if (i==num) {
               int j;
               for (j=1;j<=2*num-1;j++) {
                   printf("*"); } }
	return 0; }