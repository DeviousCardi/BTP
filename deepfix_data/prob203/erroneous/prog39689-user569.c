#include <stdio.h>
int main() {
    int N,i=0,j=0,flag=0;
    scanf("%d",&N);
    int arr[N];
    for(i=0;i<N;i++) {
        scanf("%d",&arr[i]); }
    for(i=0;i<N;i++) {
        for(j=(i+1);j<N;j++) {
            if(arr[j]==arr[i] && (flag==0)); {
                printf("YES");
                flag++;
                printf("%d",flag) } } }
    if(flag==0) printf("NO"); }