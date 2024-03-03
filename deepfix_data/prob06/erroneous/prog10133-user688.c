#include <stdio.h>
#include <string.h>
void merge(int a[], int start, int n, int end){
    int i, j, k, temp[n];
    for(k=0; k<n; k++){
        for(i=start; i<=start+n/2; i++){
            for(j=start+n/2+1; j<=end; j++){
                if(a[i]<=a[j]) {
                    temp[k]=a[i];
                    k++; }
                else if(a[i]>a[j]){temp[k]=a[j];
                    k++; }
            else if (i==start+n/2) {temp[k]=a[i];
                    k++; }
        else temp[k]=a[j];
                    k++; } }
void merge_sort(int a[], int start, int end){
    if(start==end) return ;
    else {
        int n=(end-start);
        merge_sort(a, start, start+n/2);
        merge_sort(a, start+n/2+1, end);
        merge(a, start, n, end); } }
int main(){
    return 0; }