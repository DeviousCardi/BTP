#include<stdio.h>
void func(int a[],int size) {
    int i,j,count=1,temp=0;
    for(i=0;i<size;i++) {
        count=1;
        for(j=i+1;j<size;j++) {
            if(a[i]<a[j]) {
               count++; } }
        if(count>temp)
        temp=count; }
    printf("%d",temp); }
int main() {
    int num[20],i,n;
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        scanf("%d",&num[i]); }
    func(num,n);
    return 0; }