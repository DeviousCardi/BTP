#include <stdio.h>
int recN(int a[],int d,int N){
    int i;
    if(N<d){
        printf("%d",a[N]);
        return a[N]; }
    else if(N>d){
        a[N]=0;
        for(i=N-d;i<N;i++){
            a[N]=a[N]+a[i]; }
        printf("%d",a[N]);
        return a[N]; } }
int main() {
    int N,d,i;
    int a[32],b[20];
    scanf("%d %d\n",&N,&d);
    for(i=0;i<d;i++){
        scanf("%d",&b[i]);
        a[i]=b[i]; }
    for(i=0;i<d;i++){
        printf("%d ",&b[i]); }
	return 0; }