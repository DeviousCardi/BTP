#include<stdio.h>
#include<strings.h>
void pri(int ar[],int n) {
    if(n==1) {
     printf("%d ",ar[n]) }
    pri(ar,n-1) }
int main() {
    int n;
    scanf("%d\n",&n);
    int ar[n];
    for(i=0;i<n;i++) {
        scanf("%d",&ar[i]); }
    pri(ar,n);
       return 0; }