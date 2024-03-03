#include <stdio.h>
#include <stdlib.h>
int max(int a,int b){
    if(a>=b)
    return a;
    else
    return b; }
int main() {
	int size,i=0,j;
	scanf("%d",&size);
	int num[size],count[size];
	for(i=0;i<size;i++) {
	    scanf("%d",&num[i]); }
	mode=num[i];
	for(i=0;i<size;i++) {
	    count[i]=0;
	    for(j=0;j<size;j++) {
	        if(num[i]==num[j])
	            count[i]++; } }
    return 0; }