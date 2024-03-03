#include <stdio.h>
int main() {
    int N;
    float med;
    scanf("%d\n",&N);
    int num[N],i;
    for(i=0;i<N;i++) {
        scanf("%d ",&num[i]); }
    for(i=1;i<=N-1;i++) {
        for(int j=1;j<=N-1;j++) {
            if (num[j-1]>num[j]) {
                int t=num[j-1];
                num[j-1]=num[j];
                num[j]=t; } } }
    if(N%2==0) {
        med=(num[(N/2)-1]+num[N/2])/2.0;
        printf ("%.1f",med); }
    if(N%2!=0) {
        int med=num[(N+1)/2];
        printf("%d",med);
        printf("%d  ",med); }
 return 0; }