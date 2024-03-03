#include <stdio.h>
int sum(int ar[],int a,int n) {
    if(n==a) {
        return ar[a]; }
    else {
        return ar[n]+sum(ar,a,n-1); } }
int main() {
    int num1,i,ar[100000],h;
    scanf("%d\n",&num1);
    for(i=0;i<num1;i++) {
        scanf("%d ",&ar[i]); }
    h=sum(ar,0,num1-1);
    printf("%d",h);
    return 0; }