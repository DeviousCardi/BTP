#include<stdio.h>
int add(int ary[],int ) {
    static sum=0;
    if(m==0)
    return sum;
    sum=sum+array[m];
    add(arry[m-1],m-1); }
int main() {
    int m;
    scanf("%d",&m);
    int ary[m],i;
    for(i=0;i<m;i++) {
        scanf("%d",&ary[i]); }
    int S;
    S=add(ary[m],m);
    printf("%d",S);
    return 0; }