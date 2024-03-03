#include <stdio.h>
int fibonacci(int n) {
    if(n==0)
    return 0;
    else
    if(n==1||n==2)
    return 1;
    else
    return fibonacci(n-1)+fibonacci(n-2); }
int search(int a[20],int n,int key) {
    if(n==-1)
    return 0;
    else if(a[n]==key)
    return 1;
    else
    return search(a,n-1,key); }
int main(){
    int i,a[20],n,p;
    for(i=0;i<=19;i++) {
        a[i]=fibonacci(i); }
scanf("%d\n",&n);
int b[n];
for(i=0;i<n;i++) {
    scanf("%d\n",&b[i]); }
for(i=0;i<n;i++) {
    p=search(a,20,b[i]);
    if(p==1)
    printf("yes\n");
    else
    printf("no\n"); }
return 0; }