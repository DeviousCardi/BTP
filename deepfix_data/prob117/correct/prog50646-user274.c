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
int hanoi_2(int n) {
 char A='a',B='b',C='c';
    int k=0,i;
    for(i=0;i<=n;i++) {
        if(n==hanoi_1(i,A,C,B)) {
            k=1;
            break; } }
return k; }
int main()
{   char A='a',B='b',C='c';
        int t,i;int a[50];
            printf("%d",hanoi_2(7));
            return 0; }