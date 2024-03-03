#include <stdio.h>
#include <stdlib.h>
int hanoi(int num, char a,char b,char c) {
    if (num==0) {
        return 0; }
    if (num==1) {
        return 1; }
    return (hanoi(num-1,a,c,b)+hanoi(num-1,c,a,b)+1); }
int main() {
	int t,i,k;
	char d,b,c;
	float a[20];
	scanf("%d\n",&t);
	for (i=0;i<t;i++) {
	    scanf ("%f",&a[i]); }
	for (i=0;i<t;i++) {
	    for (k=0;k*k<a[i];k++) {
	        if (hanoi(k,d,b,c)==a[i]) {
	            printf ("yes\n");
	            break; } }
	    if (k==a[i]/2+2||a[i]<0)
	    {printf ("no\n");} }
	return 0; }