#include <stdio.h>
#include <stdlib.h>
int main() {
 int h;
 scanf("%d",&h);
    int i,j,k;
    for(i=1;i<=(h+1)/2;i++) {
        for(j=1;j<=i;j++) {
             printf("*"); }
    printf("\n"); }
   for(i=(h-1)/2;i>=1;i--) {
        for(k=1;k<=i;k++) {
             printf("*"); }
    printf("\n"); }
  for(i=3;i<=(h-3)/2;i++) {
        for(j=1;j<=i;j++) {
             printf("$"); }
    printf("\n"); }
   for(i=(h-5)/2;i>=3;i--) {
        for(k=1;k<=i;k++) {
             printf("$"); }
    printf("\n"); }
return 0; }