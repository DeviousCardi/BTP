#include<stdio.h>
int prdt(int a[],int size) { }
int abs(int a) {
    if(a>0) return a;
    else return -1*a; }
int main() {
int N,i;
scanf("%d",&N);
int a[N];
for(i=0;i<N;i++)
 scanf("%d",&a[i]);
 int neg=0;
for(i=0;i<N;i++) {
    if(a[i]<0) neg=neg+1; }
for(i=0;i<N;i++) {
    a[i]=abs(a[i]); }
    return 0; }