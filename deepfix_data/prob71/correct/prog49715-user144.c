#include <stdio.h>
int sort(long long array[],long size);
int main() {
    int long long bid[100000];
    long N;
    long i;
    long median_id;
    double avg_median;
    scanf("%li",&N);
    for(i=0;i<N;i++){
        scanf("%lli",&bid[i]); }
    sort(bid,N);
    if(N%2!=0){
        median_id= (N/2);
        printf("%.1lli",bid[median_id]); }
    else{
        median_id= (N/2);
        avg_median=(bid[median_id] + bid[median_id-1])/2.0;
        printf("%lf",avg_median); }
    return 0; }
int sort(long long array[],long size){
    long i,j;
    long long temp;
    for(i=0;i<size;i++){
        for(j=i+1;j<size;j++){
            if(array[i]>array[j]){
                temp=array[i];
                array[i]=array[j];
                array[j]=temp; } } }
    return 0; }