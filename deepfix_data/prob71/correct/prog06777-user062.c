#include <stdio.h>
int swap(int a[],int i,int j){
    int temp = a[i];
    a[i] = a[j];
    a[j] = temp;
    return 1; }
int max_array(int a[],int i,int N){
    if(i>N) return 0;
    int max = 0;
    for(i=1;i<N;i++){
        if (a[i]>a[max])
        max = i; }
    return max; }
int selection_sort(int a[],int start,int end){
    if(start == end)
    return 0;
    int i;
    swap(a,start,max_array( a, i,end));
    return selection_sort(a,start+1,end); }
int main() {
    int i,N ;
    float median;
    scanf("%d\n",&N);
    int o[N];
    for(i=0;i<N;i++){
        scanf("%d",&o[i]); }
        int start = 0,end = N;
        selection_sort(o,start,end);
        int b = N%2;int c = N/2;
        if (b==1)
        median = (o[c]+o[c+1])*1.0/2;
        else median = o[c];
        printf("%f",median);
    return 0; }