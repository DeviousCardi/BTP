#include <stdio.h>
int main() {
    int N;
    float med;
    scanf("%d",&N);
    int num[N],i;
    for(i=0;i<N;i++) {
        scanf("%d",&num[i]); }
    for(i=1;i<=N-1;i++) {
        for(int j=1;j<=N-1;j++) {
            if (num[j-1]>num[j]) {
                int t=num[j-1];
                num[j-1]=num[j];
                num[j]=t; } } }
    for(i=0;i<N;i++) {
        printf("%d\n",num[i]); }
    if(N%2==0) {
        med=(num[(N/2)-1]+num[N/2])/2;
        printf ("%.1f",med); }
    if(N%2!=0) {
        med=num[1];
        printf("%d",med); }
 return 0; }