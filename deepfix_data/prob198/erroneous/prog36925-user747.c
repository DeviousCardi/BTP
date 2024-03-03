#include <stdio.h>
#include <stdlib.h>
int main() {
	int in1[20],in2[20];
	int len1=0,len2=0;
	int i,j,count=0;
	scanf("%d\n",&len1);
	for(i=0;i<len1;i++){
	    scanf("%d\n",&in1[i]); }
	scanf("%d\n",&len2);
	for(j=0;j<len2;j++){
	    scanf("%d\n",&in2[j]); }
	static int l=0,k=0;
     int min=in1[0];
	for(l=0;l<len1;l++){
	    for(k=0;k<len2;k++){
	        if(in1[l]!=in2[k]){
	            if(in1[l]<=min){
	                min=in1[l]; } }
	    else {
	        if(in1[l]==in2[k]){
	            count=count+1; }
	        if(count==len1){
	            printf("NO"); } } } }
	printf("%d\n",min); } } }
	return 0; }