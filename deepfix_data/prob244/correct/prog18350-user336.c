#include <stdio.h>
#include <stdlib.h>
int main() {
 int a;
 float tax;
 scanf("%d",&a);
 if(a<=200000) {
     tax=0; }
 else if (a>200000&&a<=500000) {
     tax=(a-200000)*0.1; }
 else if (a>500000&&a<=1000000) {
     tax=30000+(a-500000)*0.2+300000*0.1; }
 else {
     tax=130000+(a-1000000)*0.3+500000*0.2+300000*0.1; }
 printf("%.2f",tax);
	return 0; }