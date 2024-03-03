#include <stdio.h>
int swap(int a[],int i,int j){
    int temp = a[i];
    a[i] = a[j];
    a[j] = temp;
    return 1; }
int max_array(int a[],int i,int N){
    int max = 0;
    for(i=1;i<n;i++){
        if (a[i]>a[max])
        max = i; }
    return 1; }
int selection_sort(int a[],int start,int end){
    if(start == end)
    return 0;
    max-array(int o[],int i,int end);
    swap(o[],start,max);
    return selection_sort(a[],start+1,end); }
int main() {
    int i,N , o[i];
    float median;
    scanf("%d\n",&N);
    for(i=0;i<n;i++){
        scanf("%d",&o[i]);
        int start = 0,end = N;
        selection_sort(o[],start,end);
        int b = N%2,int c = N/2;
        if (b==1)
        median = (o[c]+o[c+1])*1.0/2;
        else median = o[c]; }
    return 0; }