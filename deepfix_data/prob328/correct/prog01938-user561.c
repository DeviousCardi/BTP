#include <stdio.h>
#include <stdlib.h>
int check_num(int i) {
    if (i==0)
    return 1;
    if (i==1)
    return 1;
    return 0; }
int main() {
	int a,i,b;
	int num[100];
	scanf("%d",&a);
	for (i=0;i<a;i++) {
	    scanf ("%d",&num[i]);
	    b=check_num(num[i]);
	    if (b==1)
	    printf ("yes");
	    else
	    printf ("no");
	    printf ("no"); }
	return 0; }