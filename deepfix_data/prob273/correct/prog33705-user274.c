#include <stdio.h>
#include <stdlib.h>
int main() {
	int h,i,j,k,l;
	scanf("%d",&h);
	if(h%2==0){
	    printf("give an odd number please"); }
	else{
	for(i=1;i<=h;i++) {
	   if(i<=(h+1)/2) {
	    for(j=i;j<(h+1)/2;j++)
	    {printf(" ");
	    }}
	   else
	 {for(j=i-(h+1)/2;j>=1;j--)
	 printf(" ");}
	   if(i<=(h+1)/2) {
	       for(k=(h+1)/2-i+1;k<=(h+1)/2;k++)
	       {printf("%d",k);}}
	  else{
	      for(l=i-((h+1)/2)+1;l<=(h+1)/2;l++)
	      {printf("%d",l);} }
	   printf("\n");} }
	return 0; }