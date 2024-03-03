#include <stdio.h>
#include <stdlib.h>
int main() {
	int s1,s2,n1[s1],n2[s2],i;
	scanf("%d\n %d",&s1,&s2);
	int ch1;
	int count1=0;
	ch1=getchar();
	while(ch1 !=EOF && count1<s1){
	    n1[count1]=ch1;
	    ch1=getchar(); }
	int ch2;
	int count2=0;
	ch2=getchar();
	while(ch2 !=EOF && count2<s2){
	    n2[count2]=ch2;
	    ch2=getchar(); }
	return 0; }