#include <stdio.h>
#include <stdlib.h>
int check_num(int i,int str[20],int j) {
    if (j==0)
    return 0;
    if (i==str[j-1])
    return 1;
    j=j-1;
    return check_num(i,str,j); }
void fibonacci(int str[20]) {
    int c,d,j;
    str [0]=0;
	str [1]=1;
	for (j=2;j<20;j++) {
	    c=str[j-2];
	    d=str[j-1];
	    str[j]=c+d; } }
int main() {
	int a,i,b;
	int num[100];
	int str[20];
	fibonacci(str);
	scanf("%d",&a);
	for (i=0;i<a;i++) {
	    scanf ("%d",&num[i]);
	    b=check_num(num[i],str,20);
	    if (b==1)
	    printf ("yes\n");
	    else
	    printf ("no\n"); }
	return 0; }