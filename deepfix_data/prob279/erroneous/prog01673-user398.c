#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    int arr1[n];
    int c1=0;
    int sum=0;
    int r_n,m_n
    for(int j=0;j<n;j++) {
        int bool1=0;
        for(int k=0;k<c1;k++) {
            if(arr1[k]==arr[j])
                bool1=1; }
        if(bool1==0) {
            arr1[c1]=arr[j];
            c1++; }
        if(bool1==1) {
           r_n = arr[j]; }
        sum = sum + arr[j]; }
    m_r = n*(n+1)/2 - sum + r_n;
    printf("%d\n%d",r_n,m_n);
    return 0; }