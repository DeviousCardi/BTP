#include <stdio.h>
#include <stdlib.h>
int count=0;
void hanoi(int n,char beg,char end,char mid) {
   if(n==1) {
       count++;
       return; } {
       hanoi(n-1,beg,mid,end);
       count++; }
   count++; {
       hanoi(n-1,mid,end,beg);
       count++; } }
int main() {
    int n;
    scanf("%d\n",&n);
    char a='A',b='B',c='C';
    hanoi(n,a,b,c);
    printf("%d",count);
    return 0; }