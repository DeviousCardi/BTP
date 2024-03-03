#include <stdio.h>
#include <stdlib.h>
int count;
void hanoi(int num,char A,char B,char C) {
    if (num!=0) {
       count++;
       hanoi(num-1,A,C,B);
       hanoi(1,A,B,C);
       hanoi(num-1,C,B,A); } }
int main() {
int i,t,num;
char A,B,C;
scanf("%d",&t);
for(i=0;i<t;i++) {
    scanf("%d",&num);
    count=0;
    hanoi(num,A,B,C);
    printf("%d",count); }
	return 0; }