#include <stdio.h>
#include <stdlib.h>
int main() {
	int in1[20],in2[20],a[20];
	int len1=0,len2=0;
	int i,j;
	scanf("%d\n",&len1);
	for(i=0;i<len1;i++){
	    scanf("%d\n",&in1[i]); }
	scanf("%d\n",&j);
	for(j=0;j<len2;j++){
	    scanf("%d\n",&in2[j]);
	    printf("%d",in2[j]); }
	static int n=0,k=0;
	static int min;
	min=0;
        for(k=0;k<len1;k=k+1){
            int min=0;
            for(n=0;n<len2;n=n+1){
            if(in1[k]!=in2[n]){
                if(in1[k]<min){
                min=in1[k]; } } } }
	return 0; }