#include<stdio.h>
int divide(int array[],int start,int end,int sum) {
    if(start>end) return 0;
    if(array[start]==sum) return 1;
    if(divide(array,start+1,end,sum-array[start]))
    return 1;
    else if(divide(array,start+1,end,sum))
    return 1;
    else return 0; }
int main() {
    int n,i,sum;
    scanf("%d",&n);
    int number[n];
    for(i=0;;i<n;i++)
    scanf("%d",&number[i]);
    sum=0;
    for(i=0;i<n;i++) {
        sum=sum+number[i]; }
    if(sum%2==0) {
        i=divide(number[i],0,n-1,sum/2);
        if(i=1)
        printf("YES"); }
    else
    printf("NO");
    return 0; }