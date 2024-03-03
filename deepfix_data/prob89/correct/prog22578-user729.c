#include <stdio.h>
int main(){
    int k,n,i,j,sum;
    scanf("%d",&k);
    scanf("%d",&n);
    int numbers[n];
    for(i=0; i<n; i++) {
        scanf("%d",&numbers[i]); }
    for(i=0; i<n; i++) {
        for(j=i+1; j<n; j++) {
            sum=numbers[i]+numbers[j];
            if(sum==k) {
                printf("lucky");
                break; } }
        if(sum==k) {
            break; } }
    if(sum!=k) {
        printf("unlucky"); }
    return 0; }