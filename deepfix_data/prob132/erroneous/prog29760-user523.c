#include <stdio.h>
int n,i;
scanf("%d",n);
int arr[n];
int sto[n];
int check(int a) {
    for(i=0;i<n;i++) {
        if(a==sto[i])
            return 1; }
    return 0; }
int main() {
    int count,m=0,p;
    for(i=0;i<n;i++) {
        sto[i]=-1;
        scanf("%d",arr[i]); }
    for(i=0;i<n;i++) {
       if(check(A[i])) continue;
       for(count=0,j=0;j<n;j++) {
           count=count+(A[i]==A[j]);
           if(count!=A[i]) {
               p=1;
               break; } }
       sto[m]=A[i];
       m++;
    if(p==1) printf("No"); }
    return 0; }