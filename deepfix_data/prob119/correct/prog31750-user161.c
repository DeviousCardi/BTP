#include <stdio.h>
#include <stdlib.h>
int count;
void hanoi(int num,int A,int B,int C) {
    if (num>1) {
       hanoi(num-1,A,C,B);
       hanoi(1,A,B,C);
       hanoi(num-1,C,B,A); }
    if(num==1) {
        count++; } }
int main() {
int i,t,num;
int A=1,B=2,C=3;
scanf("%d",&t);
for(i=0;i<t;i++) {
    scanf("%d",&num);
    count=0;
    hanoi(num,A,B,C);
    printf("%d\n",count); }
	return 0; }