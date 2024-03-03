#include<stdio.h>
int main() {
    int num,arr[20];
    scanf("%d\n",&num);
    for(int a=0;a<num;a++)
    scanf("%d ",&arr[a]);
    int max[20];
    int count=1,temp;
    for(int a=0;a<num;a++) {
        temp=arr[a];
        for(int b=a+1;b<num;b++)
        if(arr[b]>temp)
        {   temp=arr[b];
            count++; }
        max[a]=count;
        count=1; }
    int gr=0;
    for(int a=0;a<num;a++)
    if(max[a]>gr)
    gr=max[a];
    printf("%d",gr); }