#include <stdio.h>
int p=0,a,b;
void kd(int n,int i,int j,int k) {
    if((i*1)+(j*3)+(k*5)==n) {
        printf("%d",k);
        p++;
        return; }
    if(i*1+j*3+k*5>=n) {
    return; }
    kd(n,i+1,j,k);
    kd(n,i+1,j+1,k);
    kd(n,i+1,j+1,k+1); }
int main() {
    int n;
    scanf("%d",&n);
    kd(n,0,0,0);
    printf("%d",p);
    return 0; }