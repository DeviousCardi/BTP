#include <stdio.h>
int s=0,n;
int summation(int arr[],int i,int j,int sum) {
    int sum1=sum+arr[j];
    if(sum1==s-sum1)
        return 1;
    else if(i<n-1) {
        if(j<n-1)
        return summation(arr,i+1,i+1,sum1)||summation(arr,i,j+1,sum);
        else
            return summation(arr,i+1,i+1,sum1); }
    else if(j<n-1)
        return summation(arr,i,j+1,sum);
    else
        return 0; }
int main() {
    int i,arr[30];
    scanf("%d",&n);
    for(i=0;i<n;i++) {
         scanf("%d",&arr[i]);
         s=s+arr[i]; }
    if(summation(arr,0,0,0))
        printf("YES");
    else
        printf("NO");
    return 0; }