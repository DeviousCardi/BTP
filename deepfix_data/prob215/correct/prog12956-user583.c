#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
	int n ,m;
	scanf("%d",&n);
	 for(n=1;n<=100000000;n++){
	     if(m>0){
	           if(n%m==0&&m==n){
	           printf("Yes");}
	            else{ printf("No");} } }
return 0; }