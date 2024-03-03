#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
    if(a <= b) {
     if(a <= c) {
        printf("second largest=%d",a); }
        else  {
            printf("second largest=%d",c); } }
       else {
           if (b<=c)  {
               printf("second largest=%d",b); }
             else  {
                 printf("second largest=%d",c); } }
	return 0; }