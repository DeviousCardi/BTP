#include <stdio.h>
int sum=0;
int find(long int ar[],int n1,int n2) {
    long int h,i;
    if(n1>=0) {
        h=n2-ar[n1];
        for(i=n1-1;i>=0;i--) {
            if(h==ar[i]) {
                sum=sum+1; }
            else {
                continue; } }
        find(ar,n1-1,n2); }
    return sum; }
int main() {
    long int ar[100000];
    int h,num1,num2,i;
    scanf("%d %d\n",&num1,&num2);
    for(i=0;i<num1;i++) {
        scanf("%ld ",&ar[i]); }
    h=find(ar,num1-1,num2);
    if(h==0) {
        printf("NO"); }
    else {
        printf("YES"); }
    return 0; }