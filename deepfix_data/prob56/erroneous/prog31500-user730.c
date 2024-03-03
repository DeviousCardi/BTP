#include <stdio.h>
#include <stdlib.h>
int catalan(int num,int a[],int i) {
    int m;
    if(a[i]>num) {
        m=a[i]; }
else {
    a[i+1]=float(2*(2*i+1))/(i+1)*a[i];
    catalan(num,a,i+1); }
return m; }
int main() {
     int n,num,i=0;
     int a[100];
     a[0]=1;
     scanf("%d\n",&n);
     while(i<n) {
         scanf("%d\n",&num);
         printf("%d\n",catalan(num,a,0));
         i++; } }