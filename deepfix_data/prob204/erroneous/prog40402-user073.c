#include <stdio.h>
#include <stdlib.h>
int Pow(int a,int n);
int main() {
	int n;
	scanf("%d",&n);
	int len=0;
	int temp = n;
	while(temp!=0) {
	    temp=temp/10;
	    count++;
	}int dig=0
	for (i=0;i<len;i++) {
	    dig=temp%10;
	    temp=temp/10;
	    A[i]=dig; }
	int NewNum=0;
	for (i=0;i<len;i++) {
	    NewNum =NewNum + A[i] * Pow(10,len - i - 1); }
	if(NewNum == n) {
	    printf("YES"); }
	else
	printf("NO");
	return 0; }