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
    char a=A,b=B,c=B;
    int k=0;
    for(i=0;i<=n;i++) {
        if(n==hanoi_1(i,a,b,c)) {
            k=1;
            break; } } }
    return k; }
int main() {
    int t,i,n;int a[50];
    scanf("%d\n",&t);
    for(i=0;i<t;i++) {
        scanf("%d\n",&a[i]); }
    for(i=0;i<n;i++) {
        if(hanoi_2(a[i])==1)
        {printf("yes");}
        else
        printf("no"); }
    return 0; }