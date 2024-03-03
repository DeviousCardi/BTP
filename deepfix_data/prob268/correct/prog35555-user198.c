#include <stdio.h>
#include <stdlib.h>
int s[3];
int p;
long *memarray[3];
void kd(int n,int m,int k) {
    if(k==n) {
        p++;
        return; }
    if(k>n) {
        return; }
    if(m>n) {
        return; }
    int i=0;
    while(i<=2) {
        k=k+s[i];
        kd(n,m+1,k);
        i++; } }
int main() {
    int n;
    scanf("%d",&n);
    s[0]=1;
    s[1]=3;
    s[2]=5;
    kd(n,0,0);
    return 0; }