#include <stdio.h>
#include <stdlib.h>
long getways(int x, int m) {
    if(x==0)
    return 0;
    if(m==1)
        return 1;
    if(m==2) {
        int t=x/3;
         return t; }
    if(m==3) {
        int q=x/5;
        int count=0,i;
        for(i=1;i<=q;i++) {
            int r=(x-(5*i));
            if(r!=0)
              {printf("%ld",getways(r,1)+getways(r,2));}
            else
              {count++;} }
        return count; } }
int main() {
    int n;
    scanf("%d",&n);
    int f_1=getways(n,1);
    int f_2=getways(n,2);
    int f_3=getways(n,3);
    int S=f_1+f_2+f_3;
    printf("%d",S);
    return 0; }