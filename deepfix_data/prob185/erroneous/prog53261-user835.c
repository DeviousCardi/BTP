#include <stdio.h>
long int sum(long int ar[],long int n1,long int n2) {
    long int h;
    if(n1==0) {
        return ar[0]; }
    if(n1>0) {
        return h=ar[n]+sum(ar,n1-1,n2); }
    if(h==n2) {
        return h; } }
int main() {
    scanf("%ld %ld\n",&num1,&num2);
    for(i=0;i<num1;i++) {
        scanf("%ld ",&ar[i]); }
    h=sum(ar,num1-1,num2);
    printf("%ld\n",h);
    return 0; }