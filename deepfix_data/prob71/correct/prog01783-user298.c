#include <stdio.h>
float median(int num[],int N) {
    int med;
    if(N%2==0) {
        med=(num[(N/2)-1]+num[N/2])/2; }
    if(N%2!=0) {
        med=num[((N+1)/2)-1]; }
     printf("%d \n ",med);
    return med; }
int main() {
    int N;
    float med;
    scanf("%d",&N);
    int num[N],i;
    for(i=0;i<N;i++) {
        scanf("%d",&num[i]); }
      for(i=0;i<N;i++)
    for(i=1;i<=N-1;i++) {
        for(int j=1;j<=N-1;j++) {
            if (num[j-1]>num[j]) {
                int t=num[j-1];
                num[j-1]=num[j];
                num[j]=t; } } }
    med=median(num,N);
    if (N%2==0)
    if(N%2!=0)
    return 0; }