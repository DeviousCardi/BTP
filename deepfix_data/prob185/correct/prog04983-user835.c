#include <stdio.h>
void find(long int ar[],long int n1,long int n2) {
    long int sum=0,h,i;
    if(n1<0) {
        return; }
    else {
        h=n2-ar[n1];
        for(i=0;i<n1-1;i++) {
            if(h==ar[i]) {
                sum=sum+1;
                break; }
            else {
                continue; } }
        find(ar,n1-1,n2); }
    if(sum==0) {
        printf("NO"); }
    else {
        printf("YES"); } }
int main() {
    long int num1,num2,i,ar[100000];
    scanf("%ld %ld\n",&num1,&num2);
    for(i=0;i<num1;i++) {
        scanf("%ld ",&ar[i]); }
    find(ar,num1-1,num2);
    return 0; }