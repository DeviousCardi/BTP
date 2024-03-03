#include <stdio.h>
#include <stdlib.h>
int main(){
	int a,b,c;
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	if((a<=b)&&(b<=c)){
	    if(b!=c){
	        printf("%d",b);
	    }else{
	    printf("%d",a);
	  }} else{
	       if((a>=b)&&(b>=c)){
	        if(b!=c){
	            printf("%d",b); }
	       else{
	            printf("%d",c);
	        }} else{
	        if(a>=b){
	            printf("%d",b); }
	   else{
	       if(a<=c){
	           printf("%d",c); }
	    else{ printf("%d",a); } } } }
	       if((a==b)&&(b>c)){
	           printf("%d",c); }
	return 0; }