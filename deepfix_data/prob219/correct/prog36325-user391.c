#include <stdio.h>
#include <stdlib.h>
int main(){
    int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if (a>b){
	    if(b>c)
	    printf("%d",b);
	    if(b<c){
	        if(a>c)
	        printf("%d",c);
	        if(a<c)
	        printf("%d",a);}}
	if(b>a){
	    if(a>c)
	    printf("%d",a);
	    if(a<c){
	        if (b>c)
	        printf("%d",c);
	        if(b<c)
	        printf("%d",b);}}
	if(a==b){
	    if(a>c)
	    printf("%d",c);
	    if(a<c)
	    printf("%d",a);}
	if(c==b){
	    if(c>a)
	    printf("%d",a);
	    if(c<a)
	    printf("%d",c);}
	if(a==c){
	    if(a>b)
	    printf("%d",b);
	    if(a<b)
	    printf("%d",a);}
	return 0; }