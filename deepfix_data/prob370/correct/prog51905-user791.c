#include<stdio.h>
int main() {
    int a,b,c,max;
    scanf("%d%d%d",&a,&b,&c);
    if(a>b) {
     if(a>c) {
      max=a;
      if(b*b+c*c>a*a)
        printf("ACUTE");
      else if(b*b+c*c==a*a){printf("RIGHT");}
      else if(b+c<a){printf("INVALID");}
      else
        printf("OBTUSE"); }
     else {
      max=c;
      if(b*b+a*a>c*c)
      printf("ACUTE");
      else
      printf("OBTUSE"); } }
    else {
     if(b>c) {
      max=b;
      if(a*a+c*c>b*b)
      printf("ACUTE");
      else
      printf("OBTUSE"); }
     else {
      max=c;
      if(b*b+a*a>c*c)
      printf("ACUTE");
      else
      printf("OBTUSE"); } }
    printf("%d",max);
    return 0; }