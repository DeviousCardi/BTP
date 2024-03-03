#include <stdio.h>
#include <stdlib.h>
int main() {
int n;
scanf("%d",&n);
int i=1;
for (i=1;i<=(n+1)/2;i++) {
    int k=1;
    for (k=1;k<=i-1;k++) {
        printf(" "); }
    int j=1;
    for (j=1;j<=n+2-2*i;j++) {
        printf("*"); }
    printf("\n"); }
for (i=1;i<=(n-1)/2;i++) {
    int j=1;
    int k=1;
    for (k=1;k<=(n-i)%((n+1)/2);k++) {
      printf(" "); }
    for (j=1;j<=n-(n+i)/2;j++) {
        printf("*"); }
    printf("\n"); }
return 0; }