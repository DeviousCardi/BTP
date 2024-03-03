#include <stdio.h>
void selectionsort(int a[],int n){
    int i,j,max,index;
    for(i=n-1;i>=0;i--){
        max=a[i];
        index=i;
        for(j=n-1;j>=0;j--)
        if(a[j]>max){
            max=a[j];
            index=j; }
        a[index]=a[i];
        a[i]=max; } }
int main() {
    int i,N;
    scanf("%d",&N);
    int a[N];
    for(i=0;i<N;i++)
    scanf("%d",&a[i]);
    selectionsort(a,N);
    if(N%2==0)
    printf("%.1f",(a[N/2]+a[N/2-1])/2.0);
    else
    printf("%d",a[(N-1)/2]);
    return 0; }