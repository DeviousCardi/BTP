#include <stdio.h>
void check(int arr[],int s,int n) {
    if(s >=0 ){
        if( s == 0) {
            printf("YES");
            return; }
        else {
            for(int i = 0 ; i<n ; i++)
                check(arr,s-arr[i],n); } }
    printf("NO");
    return; }
int main() {
    int n;
    long int s;
    scanf("%d %ld",&n,&s);
    int arr[n];
    for(int i=0 ; i<n;i++)
        scanf("%d",&arr[i]);
    check(arr,s,n);
    return 0; }