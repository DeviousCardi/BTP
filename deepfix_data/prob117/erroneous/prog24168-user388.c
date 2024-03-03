#include<stdio.h>
int total_steps(int,char,char,char);
int main() {
    int t,k,i;
    int
    scanf("%d",&t);
    for(i=1;i<=t;i++) {
        scanf("%d",&k); }
    return 0; }
int total_steps(int disc,char source,char dest,char aux) {
    int x,y;
    x=total_steps(disc-1,char source,char aux,char dest);
    y=total_steps(disc-1,char aux,char dest,char source);
    return x+y+1; }