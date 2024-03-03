#include<stdio.h>
#include<limits.h>
int main() {
    int m,n,i,j,k,max_row,min_arr;
    scanf("%d%d",&n,&m);
    int arr[m];
    for(i=0;i<m;i++) {
        max_row=MIN_INT;
        for(j=0;j<n;j++) {
            scanf("%d",&k);
            if (max_row<k)
            max_row=k; }
        arr[i]=max_row; }
    min_arr=MAX_INT;
    for(i=0;i<m;i++) {
       if(min_arr>arr[i])
       min_arr=arr[i]; }
    printf("%d",min_arr);
    return 0; }