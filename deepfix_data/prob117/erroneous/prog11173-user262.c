#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int hanoi(int num,int y) {
    if (y<0)
    printf ("no\n");
    if (y>=0) {
        if (num==pow(2,y)-1) {
            printf ("yes"); }
        else hanoi(num,y-1); } }
int main() {
	int t,i,k;
	double a[20];
	scanf("%d\n",&t);
	for (i=0;i<t;i++) {
	    scanf ("%lf",&a[i]); }
	for (i=0;i<t;i++) {
	    j=0;
	    while (pow(2,j)<=a[i])
	    han(a[i],j);
	    j++; }
	return 0; }