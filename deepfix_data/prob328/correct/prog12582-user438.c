#include <stdio.h>
int fibonacci(int n) {
    if(n==0)
    return 0;
    else
    if(n==1||n==2)
    return 1;
    else
    return fibonacci(n-1)+fibonacci(n-2); }
int main(){
    int i,p,a[20],n,j;
    for(i=0;i<=19;i++) {
        a[i]=fibonacci(i);
        printf("%d\n",p); }
scanf("%d\n",&n);
int b[n];
for(i=0;i<n;i++) {
    scanf("%d\n",&b[i]); }
for(i=0;i<n;i++) {
    for(j=0;j<19;j++) {
    if(b[i]==a[j])
    printf("YES"); } }
return 0; }