#include <stdio.h>
int main(){
    int order;
    scanf("%d",&order);
    int num1=order*order;
    int i=1;
    int flag=1;
    int util;
    for(i;i<=num1;i++)
    { util=scanf("%d ",&util);
      if(i==1) {
       if(util==1) {
           continue; } }
      if(i==1+order+1) {
          if(util!=1) {
              flag=0;
              break; } }
      if(i!=1+order+1) {
          if(util!=0) {
              flag=0;
              break; } } }
    if(flag==0) {
        printf("GIVEN 3x3 matrix is NOT an IDENTITY MATRIX"); }
    if(flag==1) {
        printf("GIVEN 3x3 matrix is an IDENTITY MATRIX") }
    return 0; }