#include <stdio.h>
long int find(long int ar[],long int n1,long int n2) {
    long int sum=0,h,i;
    if(n1==0) {
        return ar[0]; }
    else {
        h=n2-ar[n1];
        for(i=0;i<n1-1;i++) {
            if(h==ar[i]) {
                sum=sum+1;
                return sum;
                break; }
            else {
                continue; } }
        find(ar,n1-1,n2); } }
int main() {
    long int num1,num2,i,ar[100000],h;
    scanf("%ld %ld\n",&num1,&num2);
    for(i=0;i<num1;i++) {
        scanf("%ld ",&ar[i]); }
    h=find(ar,num1-1,num2);
    printf("%ld\n",h);
    return 0; }