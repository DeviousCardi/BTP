#include <stdio.h>
int checksum(int arr[], int start, int end, int halfsum) {
    static int sum=0;
    if(start==end) {
            if(halfsum==sum)
                return 1;
            else
                return 0; }
    sum = sum+arr[start];
    checksum(arr,start+1,end,halfsum); }
int main() {
    int n,arr[10000],i;
    scanf("%d",&n);
    for(i=0; i<n; i++)
        scanf("%d",&arr[i]);
    int check,sum=0;
    for(i=0; i<n; i++)
        sum=sum+arr[i];
    if(sum%2!=0)
        printf("NO");
    else {
            check = checksum(arr,0,n,sum/2);
            if(check==1)
                printf("YES");
            else
                printf("NO"); }
    return 0; }