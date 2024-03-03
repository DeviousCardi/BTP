#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if(a<=b){
	    if(b<=c){
	        if(b!=c){
	        printf("%d",b); }
	    else{
	        printf("%d",a); } }
	    else{
	        if(c>=a){
	            printf("%d",c); }
	        else{
	            printf("%d",a); } } }
	    else{
	        if(a!=b){
	        if(b<=c){
	            if(a>=c){
	                if(a!=c){
	                printf("%d",c); }
	            else{
	                printf("%d",b); } }
	            else{
	                printf("%d",a); } }
	        else{
	            printf("%d",b); }
	        else{
	            printf("%d",c); } }
	return 0; }