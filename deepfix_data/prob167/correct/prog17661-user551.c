#include<stdio.h>
int n,c = 0,sum=0,flag=0;
void add(int a) {
    int x;
    sum = sum + a;
    if(c==n) {
        return; }
    else {
        c++;
        scanf("%d",&x);
        if(x>=-1000000000&&x<=1000000000) {
            add(x); }
        else {
            flag=1; } } }
int main() {
    int a;
    scanf("%d",&n);
    if(n>=2&&n<=100000) {
        scanf("%d",&a);
        if(a>=-1000000000&&a<=1000000000) {
            add(a); }
        else {
            flag =1; }
        if(flag!=1) {
            printf("%d",sum); } }
    return 0; }