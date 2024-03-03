#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
    int a3[n];
    for(int j=0;j<2*n;) {
        for(int k=0;k<n;) {
        if((k+1)==arr[(j/2)*2+1])
        {    a3[j]=arr[k+1];
            j++;
            k++; }
        else k++; }
        if(k>=n)
        k=0; }
    for(int k=0;k<2*n;k++)
    printf("%d ",a3[k]);
    return 0; }