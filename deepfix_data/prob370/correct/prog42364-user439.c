#include<stdio.h>
int main() {
    int a=0;int b=0; int c=0;
    scanf ( "%d",&a);
    scanf ("%d",&b);
    scanf ("%d",&c);
    if ((a+b>c)&&(b+c>a)&&(c+a>b)) {
     if ((a*a + b*b == c*c ))
        printf ("RIGHT");
     else if ((a*a + b*b < c*c )||(b*b + c*c < a*a)||(c*c + a*a < b*b))
        printf("OBTUSE");
     else
        printf("ACUTE"); }
    else
      printf("INVALID");
    return 0; }