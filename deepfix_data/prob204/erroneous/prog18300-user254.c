#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int inv[100];
void invert(int array_size, int nos);
int length(int n);
int length(int n) {
    int flag=0, i=0;
    while(flag!=1) {
        if((pow(10,i)<=n)&&(n<(pow(10,i+1)))) {
            flag=1; return (i+1); }
        else i++; } }
void invert(int array_size, int nos) {
    int i=0, temp=0;
    for(i=0;i<array_size;i++) {
        temp=nos%10;
        nos=nos/10;
        inv[i]=temp; }
    for(i=0;i<array_size;i++) }
void checkpalindome(int nmbr, int len);
void checkpalindrome(int nmbr, int len) {
    int i=0, num2=0;
    for(i=0;i<len;i++) {
        num2=int[i]*pow(10, (len-i)); }
    printf("Inverted nos is %d", num2); }
int main() {
	int num=0, size=0;
	scanf("%d", &num);
	size=length(num);
	invert(size, num);
	checkpalindrome(num, size);
	return 0; }