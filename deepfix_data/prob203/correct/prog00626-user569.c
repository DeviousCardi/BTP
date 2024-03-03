#include <stdio.h>
int main() {
    int N,i=0,j=1,flag=0;
    scanf("%d",&N);
    int arr[N];
    for(i=0;i<N;i++) {
        scanf("%d",&arr[i]); }
    int read;
    for(j=1;j<N;j++){
    read = arr[j-1];
    for(i=j;i<N;i++) {
        if(arr[i]==read && flag==0) {
            flag++;
            printf("YES"); }
    }}
    if(flag==0) printf("NO"); }