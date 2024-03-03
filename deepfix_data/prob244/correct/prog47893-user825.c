#include<stdio.h>
int main() {
     int a,b,c;
     scanf("%d%d%d",&a,&b,&c);
   if (a <= b) {
       if (a <= c) {
	        printf("min = %d",a); }
       else {
	        printf("min = %d", c); } }
else {
        if (b <= c)  {
	         printf("min = %d", b); }
        else {
	         printf("min =%d", c);
        }}
return 0;}