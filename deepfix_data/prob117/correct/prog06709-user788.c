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
    long int c[25],k;
    int i,j,t,count;
    scanf("%ld\n",&t);
    for(i=0;i<t;i++) {
        scanf("%ld\n",&k);
        for(j=0;j<25;j++) {
             c[j]=hanoi(j,'h','a','n');
             if(k==c[j])
             count++; }
        printf("%d\n",count); }
	return 0; }