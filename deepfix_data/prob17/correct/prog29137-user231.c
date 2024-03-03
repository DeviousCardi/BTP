#include <stdio.h>
int main() {
	int a,b,c=0,d=0,e,f,g;
	scanf("%d",&a);
	int y[20],z[20];
	do{
	    scanf("%d",&y[c]);
	    c++; }
	while(c<a);
	scanf("%d",&b);
	do{
	    scanf("%d",&z[d]);
	    d++; }
	while(d<b);
	if(b>a){
	    printf("NO"); }
	else{
	    for(f=0;f<a;f++){
	            if(z[0]==y[f]){
	                e=f;
	                break; } }
	    int h;
	    for(g=e,h=0;g<e+b;g++,h++){
	        if(z[h]!=y[g]){
	            printf("NO");
	            break; } }
	    if(g==e+b){printf("YES");} }
	return 0; }