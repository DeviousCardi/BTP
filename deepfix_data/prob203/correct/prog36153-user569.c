#include <stdio.h>
int main() {
    int N,i=0,j=0,flag=0;
    scanf("%d",&N);
    int arr[N];
    for(i=0;i<N;i++) {
        scanf("%d",&arr[i]); }
    int read;
    for(i=1;i<N;i++) {
        read = arr[i-1];
        if(arr[i]==read && flag==0) {
            flag++;
            printf("YES"); } }
    if(flag==0) printf("NO"); }