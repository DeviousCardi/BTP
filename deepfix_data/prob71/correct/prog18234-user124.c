#include <stdio.h>
    void swap(int a[],int i,int j){
        int temp;
        temp=a[i];
        a[i]=a[j];
        a[j]=temp; }
    int find_idx_of_max_elt(int a[],int start,int end){
        int k,max=0;
        for (k=start;k<end;k++){
            if (a[k]>max){
                max=a[k]; } }
        return max; }
    void selection_sort(int a[],int start,int end){
    int idx_max;
        if (start>end){
            return; }
    idx_max=find_idx_of_max_elt(a,start,end);
    printf("%d",find_idx_of_max_elt);
    swap(a,idx_max,start);
    selection_sort(a,start+1,end); }
    int main() {
        int n,i;
        scanf("%d",&n);
        int a[n];
        for (i=0;i<n;i++){
            scanf("%d",&a[i]); }
        selection_sort(a,0,n-1);
    return 0; }