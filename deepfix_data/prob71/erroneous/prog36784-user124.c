#include <stdio.h>
    swap(int a[],int i,int j){
        temp=a[i];
        a[i]=a[j];
        a[j]=temp; }
    int selection_sort(int a[],int start,int end){
    int idx_max;
        if (start>end){
            return 0; }
    idx_max=find_idx_of_max_elt(a,start,end);
    swap(a,idx_max,start);
    selection_sort(a,start+1,end); }
    int main() {
        int n,i;
        scanf("%d",&n);
        int a[n];
        for (i=0;i<n;i++){
            scanf("%d",&a[i]); }
        selection_sort(a,0,n-1);
        for (i=0;i<n;i++){
            printf("%d",a[i]); }
    return 0; }