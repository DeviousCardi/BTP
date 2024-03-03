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
    int temp,ch=0,n,m1,m2,a,b;
    scanf("%d",&n);
    int money[n];
    scanf("%d",&ch);
    for(int i=0;i<n;i++) {
        money[i]=ch;
        ch=scanf("%d",&n); }
    for(int i=1,m1=money[0],money[0];i<n;i++) {
        m1=max(m1,money[1]);
        m2=min(m2,money[1]); }
    printf("%d %d",m1,m2);
    printf("end");
    return 0; }