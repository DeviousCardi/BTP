#include<stdio.h>
void func(int a[],int size) {
    int i,j,m,count=1,temp=0;
    for(i=0;i<size;i++) {
        count=1;
        m=a[i];
        for(j=i+1;j<size;j++) {
            if(m<=a[j]) {
               count++;
               m=a[j]; }
        }  printf("%d ",count);
        if(count>temp)
        temp=count; } }
int main() {
    int num[100],i,n;
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        scanf("%d",&num[i]); }
    func(num,n);
    return 0; }