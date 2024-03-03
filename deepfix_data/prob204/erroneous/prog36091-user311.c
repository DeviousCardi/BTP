#include <stdio.h>
#include <stdlib.h>
int revnum (int);
int main() {
	int num,i,j;
	scanf("%d",&n);
	if(revnum(num)==num)
	printf("YES");
	else printf("NO");
	return 0; }
int revnum(int num) {
    int rev =0;
    while(num>0); {
        rev= rev + num%10;
        num=num/10;
        rev=rev*10; }
return rev ; }