#include<stdio.h>
int main() {
  int a,b,c ,A,B,C;
  scanf("%d%d%d",&a,&b,&c);
  if (a<c&&a<b){
      A=a; }
  if (b<c){
      B=b; C=c; }
  else {
      B=c;C=b; }
  if (b<a&&b<c){
      A=b; }
  if (a<c){
      B=a; C=c; }
  else {
      B=c; C=a; }
  if (c<a&&c<b){
      A=c; }
  if(b>a){
      B=b;C=a; }
  else  {
      B=a;C=b; }
    if(A+B<=C)
    printf("INVALID");
    else if(A*A+B*B<C*C)
        printf("ACUTE");
     else if(A*A+B*B==C*C)
        printf("RIGHT");
     else if (A*A+B*B>C*C)
        printf("OBTUSE");
     return 0; }