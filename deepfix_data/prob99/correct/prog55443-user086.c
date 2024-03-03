#include<stdio.h>
int func(int a[],int size) {
    int i,j,m,count=1,b[100],temp=0;
    for(i=0;i<size;i++) {
        count=0;
        m=a[i];
        for(j=i+1;j<size;j++) {
            if(m<a[j]) {
               count++;
               m=a[j]; } }
    b[i]=count;
        if(count>temp)
        temp=count;
        printf("%d ",b[i]); }
    return ++temp; }
int main() {
    int num[100],i,n;
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        scanf("%d",&num[i]); }
    i=func(num,n);
    printf("%d",i);
    return 0; }