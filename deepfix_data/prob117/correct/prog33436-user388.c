#include<stdio.h>
int total_steps(int,char,char,char);
int main() {
    int t,i;
    long int k,j;
    char a='a',b='b',c='c';
    scanf("%d",&t);
    for(i=1;i<=t;i++) {
        scanf("%ld",&k);
        for(j=0;j<k;j++) {
            if(k==total_steps(j,a,b,c)) {
                printf("yes");
                return 0; } }
        printf("no"); }
    return 0; }
int total_steps(int disc,char source,char dest,char aux) {
    int x,y;
    if(disc==1) {
        return  1; }
    x=total_steps(disc-1,source,aux,dest);
    y=total_steps(disc-1,aux,dest,source);
    return x+y+1; }