#include <stdio.h>
long int sum=0;
long int find(long int ar[],long int n1,long int n2) {
    long int h,i;
    if(n1>=0) {
        h=n2-ar[n1];
        printf("%ld\n",h);
        for(i=n1-1;i>=0;i--) {
            if(h==ar[i]) {
                sum=sum+1; }
            else {
                continue; } }
        find(ar,n1-1,n2); }
    return sum; }
int main() {
    long int num1,num2,i,ar[100000],h;
    scanf("%ld %ld\n",&num1,&num2);
    for(i=0;i<num1;i++) {
        scanf("%ld ",&ar[i]); }
    h=find(ar,num1-1,num2);
    printf("%ld\n",h);
    return 0; }