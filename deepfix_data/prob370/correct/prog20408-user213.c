#include<stdio.h>
int main() {
int a,b,c,max;
scanf("%d%d%d",&a,&b,&c);
if (a>= b) {
if (a>= c) {
max=a; }
else {
max=c; } }
else {
if (b>= c) {
max=b; }
else {
max=c; } }
if(max>(a+b+c-max))
printf("INVALID\n");
if((max*max)<(a*a+b*b+c*c-max*max))
printf("ACUTE\n");
 if((max*max)>(a*a+b*b+c*c-max*max))
 printf("OBTUSE\n");
 if((max*max)==(a*a+b*b+c*c-max*max))
 printf("RIGHT");
    return 0; }