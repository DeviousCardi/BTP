#include <stdio.h>
#include <stdlib.h>
int count[20],i,l=0;
for(i=0;i<20;i++) count[i]=0;
void hanoi(int n,char beg,char end,char mid) {
   if(n==1) {
       count[l]++;
       l++;
       return; } {
       hanoi(n-1,beg,mid,end);
       count[l]++; }
   count[l]++; {
       hanoi(n-1,mid,end,beg);
       count[l]++; } }
int main() {
    int i,t,n[20];
    scanf("%d\n",&t);
    for(i=0;i<t;i++) scanf("%d\n",&n[i]);
    char a='A',b='B',c='C';
    for(i=0;i<t;i++) {
        hanoi(n[i],a,b,c);
        printf("%d\n",count[i]); }
    return 0; }