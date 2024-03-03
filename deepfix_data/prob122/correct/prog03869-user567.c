#include <stdio.h>
int main() {
 int n;
 int num;
 scanf("%d",&n);
 for(int i=1;i<=n;i++) {
     for(int j=1;j<=n;j++)
     {int d;
         scanf("%d",&d);
         if(i==j) {
             if(d==1) {
                 num=0;continue; }
             else {
                 num=1;break; } }
         else {
             if(d==0) {
                 num=0;continue; }
             else {
                 num=1;break; } } }
     if(num==1)break; }
if(num==1) {
    printf("GIVEN %d x %d matrix/nis NOT an IDENTITY/n MATRIX",n,n); }
else {
     printf("GIVEN %d x %d matrixis an IDENTITY MATRIX",n,n); }
    return 0; }