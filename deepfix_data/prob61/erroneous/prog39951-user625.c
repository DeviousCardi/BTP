#include<stdio.h>
void ()int sort(int *a,int *b) {
        int t;
        if(*b>*a)
        return *a;
        else return *b;
        *b=*b-1;
        *a=*a+1; }
int main(){
    int p,q,count=0;
    scanf("%d%d",&p,&q);
    sort(p,q); }