#include <stdio.h>
int main(){
    int arr1[100],arr2[100],c,n;
    int i=c=0;
    scanf("%d\n",n);
    for(int i=0;i<n;i++) {
        scanf("%d ",&c);
        arr1[i]=c; }
    for(int j=0;j<n;j++) {
        scanf("%d ",c);
        arr2[c]=arr1[j] }
    printf("\n");
    for(int j=0;j<i;j++) {
        printf("%d ",arr2[j]); }
    printf("end");
    return 0; }