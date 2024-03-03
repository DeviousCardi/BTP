# include <stdio.h>
int main() {
    int n,k,i;
    scanf("%d%d",&n,&k);
    int arr[n],output[n];
    for(i=0;i<n;i++){
        scanf("%d ",&arr[i]); }
    int count[k+1];
    for(i=0;i<k+1;i++) {
        count[arr[i]] += 1;
        printf("%d ",count[i]); }
    return 0; }