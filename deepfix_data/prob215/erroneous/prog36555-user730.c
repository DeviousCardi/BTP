#include <stdio.h>
#include <stdlib.h>
int sumdiv(int a);
int main() {
	int n;
	scanf("%d",%n);
	if(sumdiv(n)==n) {
	    printf("YES"); }
	  else {
	     printf("NO"); }
	return 0; }
int sumdiv(int a) {
     int i,sum=1;
       for(i=2;i<=(a/2)+1;i++) {
             if((a%i)==0) {
                 sum=sum+i; } }
          return sum; }