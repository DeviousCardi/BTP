#include <stdio.h>
#include <stdlib.h>
int main() {
    int n1[500],n2[500];
	int s1,s2;
	scanf("%d\n",&s1);
	scanf("%d\n",&s2);
	int i;
	for(i=0;i<s1;i++){
	 scanf("%d",&n1[i]); }
	for(i=0;i<s2;i++){
	    scanf("%d",&n2[i]); }
	return 0; }