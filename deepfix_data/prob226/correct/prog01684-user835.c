#include <stdio.h>
int recurrence(int ar[],int n) {
    if(n==0) {
        return ar[0]; }
    else {
        return ar[n-1]+recurrence(ar,n-2); } }
int main() {
    int num1,num2,i,ar[1000],h;
    scanf("%d %d\n",&num1,&num2);
    for(i=0;i<num1;i++) {
        scanf("%d ",&ar[i]); }
    h=recurrence(ar,num2);
    printf("%d",h);
    return 0; }