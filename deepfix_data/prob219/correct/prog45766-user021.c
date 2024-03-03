#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if(a!=b && b!=c && c!=a){
	if(a<b){
	    if(a<c){
	        if(b<c){
	            printf("%d",b); }
	        else{
	            printf("%d",c); } }
	    else{
	        printf("%d",a); } }
	else if(b<a){
	    if(b<c){
	        if(a<c){
	            printf("%d",a); }
	        else{
	            printf("%d",c); } }
	    else{
	        printf("%d",b); }
	}}
	else if(a==b || b==c || c==a){
	    if(a==b && a>c){
	        printf("%d",c); }
	    else if(b==c && b>a){
	        printf("%d",a); }
	    else if(c==a && c>b){
	        printf("%d",b); } }
	return 0; }