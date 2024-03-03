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
    long int c[25];
    int i;
    for(i=0;i<25;i++) {
        c[i]=hanoi(i,'a','k','h');
        printf("%ld\n",c[i]); }
	return 0; }