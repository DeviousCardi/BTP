#include <stdio.h>
int max(int a,int b){
    if(a>b)
    return a;
    else
    return b; }
int min(int a,int b){
    if(a<b)
    return a;
    else
    return b; }
int main() {
    int temp,ch,n,aom,m1,m2;
    scanf("%d",&n);
    int money[n];
    ch=getchar();
    for(int i=0;i<=n;i++) {
        money[i]=ch;
        ch=getchar(); }
    for(int i=1,m1=money[0],money[0];i<=n;i++) {
        m1=max(m1,money[1]);
        m2=min(m2,money[1]); }
    temp=m1;
    m1=m2;
    m2=m1;
    printf("end");
    return 0; }