#include <stdio.h>
int main() {
    int n,k;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
    int a3[n];
    a3[0]=1;
    for(int j=1;j<2*n;) {
        for( k=0;k<n;) {
        if((k+2)==arr[j])
        {    a3[j+1]=arr[k];
            j++;
            k++; }
        else k++;
        if(k>=n)
        k=0; } }
    for(int k=0;k<2*n;k++)
    printf("%d ",a3[k]);
    return 0; }