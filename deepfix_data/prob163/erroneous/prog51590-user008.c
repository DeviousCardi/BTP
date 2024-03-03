#include <stdio.h>
#include <stdlib.h>
int max(int a,int b) {
    if(a>b)
    return a;
    else
    return b; }
int main() {
	int n1,n2,i;
	scanf("%d\n%d\n",&n1,&n2);
	int a1[500],a2[500];
	for(i=n1-1;i>=0;i--)
	a1[i]=getchar()-'0';
	scanf("\n");
	for(i=n2-1;i>=0;i--)
	a2[i]=getchar()-'0';
	int b[500];
	for(i=0;i<500;i++)
	b[i]=0;
	for(i=0;i<max(n1,n2);i++) {
	    if(i>ni&&i>n2){
	    b[i+1]=(a1[i]+a2[i]+b[i])/10;
	    b[i]=(a1[i]+a2[i]+b[i])%10; } }
	for(i=max(n1,n2)+1;i>=0;i++) {
	    printf("%d",b[i]); }
	return 0; }