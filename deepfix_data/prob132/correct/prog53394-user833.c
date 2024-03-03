#include <stdio.h>
int main() {
    int n, i, j, flag=5, k;
    scanf ("%d", &n);
    int arr[n], b[n];
    for(i=0; i<n; i++){
        scanf("%d,", &arr[i]); }
    for(i=0; i<n; i++){
        b[i]=0; }
    for(i=1; i<n; i++){
        int count=0;
        for(j=0; j<n; j++){
            if(arr[j]==i){
                count=count+1;
                b[i]=count; } } }
    for(i=1; i<n; i++){
        if(b[i]==i || b[i]==0){
            flag=1; }
        else {
            flag=0;
            break; } }
    if(flag==1){
        printf("Yes"); }
    else printf("No");
    return 0; }