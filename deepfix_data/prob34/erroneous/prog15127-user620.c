#include <stdio.h>
#include <stdlib.h>
int min(int a, int b){
    if(a>b)return b;
    else return a; }
int main() {
	int  size,i,test;
	scanf("%d",&size);
	int num[size];
	for(i=0;i<size;i++)
	    scanf("%d",&num[i]);
	scanf("%d",&test);
	int ind[test];
	for(i=0;i<test;i++)
	    scanf("%d",&ind[i]);
	for(i=0;i<test;i++) {
	        if(min(num[ind[i]],num[])==1)
	            printf("No");
	        else
	            printf("Yes"); }