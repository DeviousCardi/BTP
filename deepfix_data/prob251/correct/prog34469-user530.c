#include <stdio.h>
#include <stdlib.h>
long getways(int x, int m) {
    int count=0;
    if(x==0){
        count++;
        return(count); }
    if(m==3) {
        x=x-5;
        if(x%5!=0)m=3;
        if(x%3!=0)m=2;
        else m=1;
        count=count+getways(x,m); }
    if(m==2) {
        x=x-3;
        if(x%3!=0)m=2;
        else m=1;
        count=count+getways(x,m); }
    if(m==1) {
        x=0;
        m=1;
        count=count+getways(x,m); } }
int main() {
    int n,count;
    scanf("%d",&n);
    int y=3;
    int x=n;
    count=getways(x,y);
    printf("%d",count);
    return 0; }