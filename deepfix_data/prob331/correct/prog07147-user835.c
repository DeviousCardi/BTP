#include <stdio.h>
int identity(int a) {
    int num[100];
    int sum=0;
    for(int i=1;i<=a;i++) {
        for(int j=1;j<=a;j++) {
            scanf("%d",&num[j]);
            if(i==j&&num[j]==1) {
                sum=sum+1; }
            if(i!=j&&num[j]==0) {
                sum=sum+1; } } }
    return(sum); }
int main() {
  int h,a;
  scanf("%d",&a);
  h=identity(a);
  if(h==a*a) {
      printf("GIVEN %d x %d matrix is an IDENTITY MATRIX",a,a); }
  else {
      printf("GIVEN %d x %d matrix is NOT an IDENTITY MATRIX",a,a); }
  return 0; }