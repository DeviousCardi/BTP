#include <stdio.h>
#include <stdlib.h>
int main() {
 int i=0,j=0;
 long num;
 long ar[20];
 scanf("%ld",&num);
 while(num>0) {
     num=num/10;
     j++; }
 for(i=0;i<j;i++) {
     ar[j-i-1]=num%10;
     num=num/10; }
 for(i=0;i<j:i++) {
     printf("%ld",ar[i]); }
	return 0; }