#include <stdio.h>
#include <stdlib.h>
int count[20],i,l=0;
void init() {
    for(i=0;i<20;i++) count[i]=0; }
void hanoi(int n,char beg,char end,char mid) {
   if(n==1) {
       count[l]++;
       return; }
   hanoi(n-1,beg,mid,end);
   count[l]++;
   hanoi(n-1,mid,end,beg); }
int main() {
    int i,t,n[20];
    scanf("%d\n",&t);
    for(i=0;i<t;i++) scanf("%d\n",&n[i]);
    init();
    for(i=0;i<t;i++) {
        if(n==0) {
            printf("0\n");
            l++;
            return 0; }
        hanoi(n[i],'A','B','C');
        printf("%d\n",count[l]);
        l++; }
    return 0; }