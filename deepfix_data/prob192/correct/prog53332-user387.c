#include <stdio.h>
#include <stdlib.h>
int main() {
int i,j,n;
scanf("%d",&n);
for(i=1;i<=9;i++) {
    for(j=1;j<=i;j++) {
       printf("    *"); } }
for(i=1;i<=9;i++) {
      for(j=1;j<=i;j++) {
          printf("    *"); } }
for(i=1;i<=9;i++) {
      for(j=1;j<=i;j++) {
       printf(" *"); } }
for(i=1;i<=9;i++) {
      for(j=1;j<=i;j++) {
          printf(" *"); } }
  for(i=1;i<=9;i++) {
      for(j=1;j<=i;j++) {
          printf("*"); } }
  printf("\n");
    return 0; }