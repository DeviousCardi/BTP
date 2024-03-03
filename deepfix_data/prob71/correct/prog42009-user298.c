#include <stdio.h>
int main() {
    int N,median;
    scanf("%d\n",&N);
    int num[N],i;
    for(i=0;i<N;i++) {
        scanf("%d",num[i]); }
    for(i=1;i<N;i++) {
        for(int j=1;j<N;j++) {
            if (num[j-1]>num[j]) {
                int t=num[j-1];
                num[j-1]=num[j];
                num[j]=t; } } }
    printf("%s",num[N]);
    if(N%2==0) {
        median=(num[(N/2)-1]+num[N/2])/2;
        printf("%.1d",median); }
    if(N%2!=0) {
        median=num[N/2];
        printf("%d",median); }
    return 0; }