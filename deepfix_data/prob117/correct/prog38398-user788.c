#include <stdio.h>
#include <stdlib.h>
int hanoi(int n,char a,char b,char c) {
    int count1,count2,count3;
    if(n==0)
    return 0;
    if(n==1)
    return 1;
    count1=hanoi(n-1,a,c,b);
    count2=hanoi(1,a,b,c);
    count3=hanoi(n-1,b,a,c);
    return count1+count2+count3; }
int main() {
    long int k;
    int i,a[5000000],count;
	scanf("%ld\n",&k);
	for(i=0;i<k;i++) {
	    scanf("%d\n",&a[i]);
	    printf("%d\n",a[i]); }
	return 0; }