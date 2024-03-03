#include<stdio.h>
#include<stdlib.h>
int cat(int s) {
    int num=0,q;
    if(s==1||s==0)
    num=1;
    else
    for(q=1;q<s;q++)
    num=num+cat(q)*cat(s-q-1);
    printf("%d\n",num);
    return num; }
void check(int c) {
    int i,n=1,t=0;
    for(i=0;i<n;i++)
    if(cat(i)>c) {
        t=1;
    break; }
    if(t==1)
    printf("%d",cat(i-1));
    else
    n+=1; }
int main() {
 int a,b,c;
 scanf("%d\n",&a);
 for(b=0;b<a;b++) {
     scanf("%d\n",&c);
     check(c); }
 return 0; }