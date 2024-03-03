#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int num[2*n-1];
    int i,j;
    for(i=0;i<2*n-1;i=i+1) {
        scanf("%d",&num[i]); }
    for(i=0;i<2*n-1;i=i+1) {
        printf("%d\n",num[i]); }
    int num1[1000];
      for(i=2;i<2*n-1;i=i+1) {
          if(i%2==0) {
              num1[i-1]=num[i]; } }
    num1[0]=num[0];
    int sum=0;
    for(i=0;i<n ;i=i+1) {
        int count=0;
        for(j=0;j<n;j++) {
            if(num[i]==num[j]) {
                count=count+1; } }
        sum=sum+count; }
    int sum1=0;
    for(i=0;i<n;i=i+1) {
        sum1=sum1+num[i]; }
    if(sum1==sum) {
        printf("Yes"); }
    else {
        printf("No"); }
    return 0; }