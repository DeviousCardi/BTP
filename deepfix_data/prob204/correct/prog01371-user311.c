#include <stdio.h>
#include <stdlib.h>
int revnum (int);
int main() {
	int num;
	scanf("%d",&num);
	if(revnum(num)==num )
	printf("YES");
	else printf("NO");
	return 0; }
int revnum(int n) {
    int rev = 0;
    while(n>0) {
        rev= rev + (n%10);
        rev = rev*10;
        n = n/10 ; }
    return rev ; }