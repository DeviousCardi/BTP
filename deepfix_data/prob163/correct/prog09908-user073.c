#include <stdio.h>
#include <stdlib.h>
int Max(int a,int b);
int main() {
	int n1,n2;
	int i,j;
	scanf("%d",&n1);
	scanf("%d",&n2);
	int Num1[n1],Num2[n2];
	for(i=0;i<n1;i++) {
	    scanf("%d",&Num1[i]); }
	for(j=0;j<n2;j++) {
	    scanf("%d",&Num2[j]); }
	return 0; }
int Max(int a,int b) {
    if(a>b) {
        return a; }
    else
    return b; }