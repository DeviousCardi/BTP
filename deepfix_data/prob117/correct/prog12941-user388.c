#include<stdio.h>
long int total_steps(long int,char,char,char);
int main() {
    int t,i;
    int k,j,count=0;
    char a='a',b='b',c='c';
    scanf("%d",&t);
    for(i=1;i<=t;i++) {
        scanf("%d",&k);
        if(k<0) {
            printf("no");
            return 0; }
        for(j=1;j<k;j++) {
            if(k==total_steps(j,a,b,c)) {
                count++; } }
        if(count==0) {
            printf("no"); }
        else {
            printf("yes"); } }
    return 0; }
long int total_steps(long int disc,char source,char dest,char aux) {
    int x;
    if(disc==1) {
        return  1; }
    x=total_steps(disc-1,source,aux,dest);
    return 2*x+1; }