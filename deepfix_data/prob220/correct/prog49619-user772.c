#include <stdio.h>
#include <stdlib.h>
int main() {
    int num;
    scanf("%d",&num);
    int i;
    for (i=1;i<=num-1;i++) {
        int j;
        for (j=1;j<=2*i-1;j++) {
            if (j==num-i||j==num+i) {
                printf("*"); }
            else {
                printf(" "); } } }
   if (i==num) {
               int j;
               for (j=1;j<=num;j++) {
                   printf("*"); } }
	return 0; }