#include <stdio.h>
int main() {
    int n,i,j,mis,rep;
    scanf("%d",&n);
    int arr[n],occurence[n];
    for(i=0;i<n;i++) {
        scanf("%d",&arr[i]); }
    for(i=0;i<n;i++) {
        occurence[i]=0;
        for(j=0;j<n;j++) {
            if(arr[i]==arr[j]) {
                occurence[i]++; } }
        if( if(occurence[i]==2) {
            printf("%d",array[i]); } }
    for(i=0;i<n;i++) {
        if(occurence[i]==0) {
            printf("%d",array[i]); } }
    return 0; }