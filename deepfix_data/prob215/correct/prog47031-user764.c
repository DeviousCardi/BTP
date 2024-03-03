#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,i,j,count,b[count];
	scanf("%d",&a);
	 count=0;
	for(i=1;i<a;i=i+1){
	    if(a%i==0){
	        b[count]=i;
	        count=count+1;}
	        else if(a%i!=0){
	            continue; } }
	   int c=0;
	    for(j=0;j<count;j=j+1){
	        c=c+b[j]; }
	    if(c==a){
	        printf("YES");}
	   else {printf("NO");}
	return 0; }