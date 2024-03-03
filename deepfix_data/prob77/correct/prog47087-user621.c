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
    int ch=0,n,m1=0,m2=0,a,b,temp;
    scanf("%d",&n);
    int money[n];
    scanf("%d",&ch);
    for(int i=0;i<n;i++) {
        money[i]=ch;
        scanf("%d",&ch); }
    m1=money[0],m2=money[0];
    for(int i=1;i<n;i++) {
        m1=max(m1,money[i]);
        m2=min(m2,money[i]); }
    for(int i=0;m1!=money[i];i++) {
        a=i+1; }
    for(int i=0;m2!=money[i];i++) {
        b=i+1; }
        temp=money[a];
        money[a]=money[b];
        money[b]=temp;
    for(int i=0;i<n;i++)
    printf("%d ",money[i]);
    printf("end");
    return 0; }