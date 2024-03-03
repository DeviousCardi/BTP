#include <stdio.h>
#include <stdlib.h>
int count=0;
int hanoi_1(int n,char A,char C,char B) {
    if(n==1) {
        count=count+1; }
    else {
        hanoi_1(n-1,A,B,C);
        count=count+1;
        hanoi_1(n-1,B,C,A); }
   return count; }
int main() {
    char A='a',B='b',C='c';
    int t,i;int a[50];
    scanf("%d\n",&t);
    for(i=0;i<t;i++) {
        scanf("%d\n",&a[i]); }
    for(i=0;i<t;i++) {
        if(hanoi_1(a[i],A,B,C)==t)
        {printf("yes");}
        else
        printf("no"); }
    return 0; }