#include <stdio.h>
#include <stdlib.h>
int main() {
	int h,i,j;
	scanf("%d",&h);
	for(i=1;i<=h/2+1;i++){
	    for(j=i;j<=h/2;j++){
	        printf(" "); }
	    int k,l=h/2-i+2,m;
	    for(k=i;k<=i*2-1;k++){
	        printf("%d",l%10);
	        if(l==h/2-i+2){
	            for(m=i;m<=i*2-2;m++){
	                printf("%d",(l+1)%10);
	                l++; } }
	        l++; }
	    printf("\n"); }
	for(i=h/2;i>=1;i--){
	    for(j=h/2;j>=i;j--){
	        printf(" "); }
	    int k,l=h/2-i+2,m;
	    for(k=i;k<=i*2-1;k++){
	        printf("%d",l%10);
	        if(l==h/2-i+2){
	            for(m=i;m<=i*2-2;m++){
	                printf("%d",(l+1)%10);
	                l++; } }
	        l++; }
	    printf("\n"); }
	return 0; }