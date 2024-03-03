#include <stdio.h>
#include <stdlib.h>
int main() {
    int num;
    scanf("%d",&num);
    int i;
    for (i=0;i<=num-2;i++) {
        int j;
        for (j=1;j<=2*num-1;j++) {
            if (j==num-i||j==num+i) {
                printf("*"); }
            else {
                if (j<=num-i-1) {
                    printf(" "); }
                if (j>=num-i+1&&j<=2*num-2) {
                    printf(" "); } } }
        printf("\n"); }
   if (i==num-1) {
               int j;
               for (j=1;j<=2*num-1;j++) {
                   printf("*"); } }
	return 0; }