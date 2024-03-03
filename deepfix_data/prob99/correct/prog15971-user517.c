#include<stdio.h>
int main() {
    int N,i,temp,j;
    scanf("%d\n",&N);
    int arr[N],maxtill[N];
    for(i=0;i<N;i++){
        scanf("%d ",&arr[i]); }
    maxtill[0]=1;
    for(i=1;i<N;i++){
        int sum=0;
        for(j=0;j<i;j++){
            if(arr[j]<arr[i]){
                if(maxtill[j]>sum)
                sum=maxtill[j]; } }
        if(sum==0){
            temp=1; }
        else
            temp=sum+1;
        maxtill[i]=temp; }
    int a=0;
    for(i=0;i<N;i++){
        if(maxtill[i]>=a){
            a=maxtill[i]; } }
    printf("%d",a);
    return 0; }