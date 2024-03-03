#include<stdio.h>
void mergesort(int[],int,int,int);
void partition(int[],int,int);
int main() { {
        int input[10000];
        int i,size;
        scanf("%d" ,&size);
        for(i=0;i<size;i++) {
            scanf("%d" ,&input[i]); }
            partition(input,0,size-1);
            for(i=0;i<size;i++) {
            printf("%d" ,input[i]); }
        return 0;
        void partition(int input[] ,int low,int high); {
            int mid;
            if(low<high){
                mid=(low+high)/2;
                partition(input,low,mid);
                partition(input,mid+1,high);
                merge sort(input,low,mid,high); } } }
    return 0; }