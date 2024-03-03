# include <stdio.h>
# include <stdlib.h>
int main() {
    int n,k,i;
    scanf("%d%d",&n,&k);
    int arr[n],output[n];
    for(i=0;i<n;i++){
        scanf("%d ",&arr[i]); }
    int *count;
    count = (int *)malloc((k+1)*sizeof(int));
    for(i=0;i<k+1;i++){
        count[i] = 0; }
    for(i=0;i<k+1;i++) {
        count[arr[i]] += 1; }
    int total = 0;
    int oldcount;
    for(i=0;i<k+1;i++) {
        oldcount = count[i];
        count[i] = total;
        total += oldcount; }
    for(i=0;i<n;i++){
        output[count[arr[i]]] = arr[i];
        count[arr[i]] += 1; }
    for(i=0;i<n;i++){
        printf("%d ",output[i]); }
    return 0; }