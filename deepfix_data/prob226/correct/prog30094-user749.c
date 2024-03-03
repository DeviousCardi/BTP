#include <stdio.h>
int recN(int a[],int d,int N){
    int i,j;
    if(N<d){
        printf("%d",a[N]);
        return a[N]; }
    else if(N>=d){
        a[d]=0;
        for(i=0;i<=N;i++){
           for(j=0;j>=1&&j<=d;j++){
               a[d+i]=a[d+i]+a[d+i-j]; } }
        printf("%d",a[N]);
        return a[N]; } }
int main() {
    int N,d,i;
    int a[32],b[20];
    scanf("%d %d\n",&d,&N);
    for(i=0;i<d;i++){
        scanf("%d",&b[i]);
        a[i]=b[i]; }
    recN(a,d,N);
	return 0; }