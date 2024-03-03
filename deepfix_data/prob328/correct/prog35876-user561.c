#include <stdio.h>
#include <stdlib.h>
int check_num(int i,char str[30],int j) {
    if (j==0)
    return 0;
    if (i==str[j-1])
    return 1;
    j=j-1;
    return check_num(i,str,j); }
int main() {
	int a,i,b,j,c,d;
	int num[100];
	char str[30];
	str [0]=0;
	str [1]=1;
	for (j=2;j<30;j++) {
	    c=str[j-2];
	    d=str[j-1];
	    str[j]=c+d; }
	scanf("%d",&a);
	for (i=0;i<a;i++) {
	    scanf ("%d",&num[i]);
	    b=check_num(num[i],str,20);
	    if (b==1)
	    printf ("yes\n");
	    else
	    printf ("no\n"); }
	return 0; }