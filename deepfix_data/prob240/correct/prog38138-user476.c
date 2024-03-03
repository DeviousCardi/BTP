#include <stdio.h>
#include <stdlib.h>
void check(int k,int j) {
    int catalan_no=1,temp;
    temp=catalan_no;
    if(j==0||j==1)
    catalan_no=1;
    else
    catalan_no=catalan_no*((j+2)/2);
    if(k>catalan_no)
    printf("%d",temp);
    else
    check(k,j+1); }
int main() {
	int t,k,i;
	scanf("%d",&t);
	for(i=0;i<t;i++) {
	    scanf("%d",&k);
	    check(k,0); }
	return 0; }