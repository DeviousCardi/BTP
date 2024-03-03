#include <stdio.h>
#include <stdlib.h>
int check_palindrome(int a);
int main() {
	int n;
	int flag=0;
	scanf("%d",&n);
	flag=check_palindrome(n);
	if(flag==1) {
	    printf("YES"); }
	else {
        printf("NO"); }
	return 0; }
int check_palindrome(int a)
{   int r=0;
    int rev=0;
    int temp=a;
    while(temp>0) {
        r=temp%10;
        rev=rev*10+r;
        temp=temp/10; }
    if(s==a) {
        return 1; }
    else {
        return 0; } }