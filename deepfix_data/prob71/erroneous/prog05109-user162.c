#include <stdio.h>
int main() {
    int N,max,i,j,temp;
    scanf("%d",&N);
    int a[N];
    for (i=0;i<N;i++) {
     scanf("%d",&a[N]); }
        for(j=i+1;j<N;j++) {
            if (a[i]>a[j]) {
              temp=a[i];
              a[i]=a[j];
              a[j]=temp; } }
    if(N%2!=0) {
        printf("%d",a[(N-1)/2]); }
    else
    if (N%2==0) {
        float p=(a[(N-2)/2]+a[N/2])/2.0;
        printf("%.1f",P) }
    return 0; }