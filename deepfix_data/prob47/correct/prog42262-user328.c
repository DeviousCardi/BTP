#include <stdio.h>
#include <stdlib.h>
int sum(int a) {
    int s=0;
    int i;
    for(i=0;i<a;i++) {
        s=s+catalan(2*i,i+1,i); }
    return s; }
int fact(int a) {
    int f=1;
    int i;
    if (a==0) {
        f=1; }
    else {
    for(i=1;i<=a;i++) {
        f=f*i; } }
    return f; }
int catalan(int a) {
    int cat=(fact(2*a))/(fact(a+1)*fact(a));
    return cat; }
int main() {
    int t,a[t],i,h;
    scanf("%d\n",&t);
    for(i=0;i<t;i++) {
        scanf("%d\n",&a[i]); }
   for(i=0;i<t;i++) {
       h=sum(a[i]);
       printf("%d\n",h); }
	return 0; }