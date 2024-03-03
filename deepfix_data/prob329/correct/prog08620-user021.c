#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,b,c;
	int x,y,z;
	scanf("%d%d%d",&a,&b,&c);
	if(a<=b){
	    if(a<=c){
	        if(b<=c){
	            x=a;y=b;z=c; }
	        else{
	            x=a;y=c;z=b; }
	    }else{
	        x=c;y=a;z=b; } }
	 	else{
	 	    if(b<=c){
	 	        if(a<=c){
	 	            x=b;y=a;z=c; }
	 	        else{
	 	            x=b;y=c;z=a; } }
	 	    else{
	 	        x=c;y=b;z=c; } }
	if (x+y>=z){
	    if((x*x+y*y)==(z*z)){
	        printf("Right Triangle"); }
	    else{
	        printf("Not Right Triangle"); } }
	else {
	    printf("Cannot form a Triangle"); }
	return 0; }