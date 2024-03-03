#include <stdio.h>
int main(){
    int arr1[100],arr2[100],c,k,n;
    c=0;
    scanf("%d\n",&n);
    for(int i=0;i<n;i++) {
        scanf("%d ",&c);
        arr1[i]=c; }
    for(int j=0;j<n;j++) {
        scanf("%d ",&k);
        arr2[k]=arr1[j]; }
    for(int l=0;l<n;l++) {
        printf("%d ",arr2[l]); }
    printf("end");
    return 0; }