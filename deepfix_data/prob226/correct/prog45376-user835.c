#include <stdio.h>
int recurrence(int ar[],int n1,int n2) {
    int ar1[1000];
    if(n1<n2) {
        return ar[n1]; }
    else {
        ar1[n1]=ar[n1-1]+recurrence(ar,n1-1,n2);
        return ar1[n1]; } }
int main() {
    int num1,num2,i,ar[1000],h;
    scanf("%d %d\n",&num1,&num2);
    for(i=0;i<num1;i++) {
        scanf("%d ",&ar[i]); }
    for(i=num1;i<=num2;i++) {
        h=recurrence(ar,i,num1); }
    printf("%d",h);
    return 0; }