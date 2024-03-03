#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
    if(a <= b) {
     if(a <= c) {
        printf("second largest=%d\n",a); }
        else  {
            printf("second largest=%d\n",c); } }
       else {
           if (b<=c)  {
               printf("second largest=%d\n",b); }
             else  {
                 printf("second largest=%d\n",c); } }
	return 0; }