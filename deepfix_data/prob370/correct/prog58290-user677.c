#include<stdio.h>
int main() {
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if((a+b<c)||(a-b>c)||(b-a>c)||(c+b<a)||(c-b>a)||(b-c>a)||
        (a+c<b)||(a-c>b)||(c-a>b)) {
        printf("INVALID"); }
    else if(((a*a)+(b*b)>(c*c)) || ((a*a)+(c*c)>(b*b)) ||
              ((c*c)+(b*b)>(a*a))) {
                  printf("ACUTE"); }
    else if(((a*a)+(b*b)==(c*c)) || ((a*a)+(c*c)==(b*b)) ||
              ((c*c)+(b*b)==(a*a))) {
                  printf("RIGHT"); }
    else {
        printf("OBTUSE"); }
        return 0; }