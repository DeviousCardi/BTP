#include<stdio.h>
int main() {
int a,b,c;
scanf("%d%d%d",&a,&b,&c);
if (a+b>c && a+c>b && b+c>a) {
if (b*b+a*a-c*c>0 && b*b+c*c-a*a>0 && a*a+c*c-b*b>0)
printf("ACUTE");
else if(b*b+a*a-c*c<0 || b*b+c*c-a*a<0 || c*c+a*a-b*b<0)
printf("OBTUSE");
else(b*b+a*a-c*c= 0 || b*b+c*c-a*a= 0 || a*a+c*c-b*b= 0) {
printf("RIGHT"); } }
else
printf("INVALID");
    return 0; }