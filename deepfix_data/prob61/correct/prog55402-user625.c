#include<stdio.h>
int sort(int *a,int *b) {
        if(*b>*a) printf("%d",*a);
        else printf("%d",*b);
        *b=*b-1;
        *a=*a+1; }
int main(){
    int p,q,count=0;
    scanf("%d%d",&p,&q);
    sort(p,q); }