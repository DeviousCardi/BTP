#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int main() {
	int num,num2=0,n=0,i;
	scanf("%d",&num);
	int t=num;
	while(t>0) {
	        t=t/10;
	        n++; }
	 t=num;
	for(i=n-1;i>=0;--i) {
	        d=t%10;
	        num2=num2+(d*(pow(10,i)));
	        t=t/10; }
	 if(num2==num1) {
	        printf("YES"); }
	 else {
	        printf("NO"); }
	return 0; }