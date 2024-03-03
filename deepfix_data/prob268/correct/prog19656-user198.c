#include <stdio.h>
int p=0;
void kd(int n,int i,int j,int k) {
    if(((i*1)+(j*3)+(k*5))==n) {
        p++;
        return; }
    if(i+j+k>=n)
    return;
    kd(n,i+1,j,k);
    if(i>=n) {
        return; }
    kd(n,i,j+1,k);
    if(j>n/2) {
        return; }
    kd(n,i,j,k+1); }
int main() {
    int n;
    scanf("%d",&n);
    kd(n,0,0,0);
    printf("%d",p);
    return 0; }