# include <stdio.h>
int main() {
    int n,k,i;
    scanf("%d%d",&n,&k);
    int arr[n],output[n];
    for(i=0;i<n;i++){
        scanf("%d ",&arr[i]); }
    if(n==1){
    printf("%d",arr[0]);
    return 0; }
    int count[k+1];
    for(i=0;i<=k;i++) {
        count[arr[i]] += 1; }
    int total = 0;
    int oldcount=0;
    for(i=0;i<n;i++) {
        oldcount = count[i];
        count[i] = total;
        total += oldcount; }
    printf("%d",total);
    for(i=0;i<n;i++){
        output[count[arr[i]]] = arr[i];
        count[arr[i]] += 1; }
    for(i=0;i<n;i++){
        printf("%d ",output[i]); }
    return 0; }