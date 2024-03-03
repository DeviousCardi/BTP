#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    scanf("%d ",&a[i]);
    int t[n];
    for(int i=0;i<n;i++){
        int count=0;
        for(int j=i;j<n;j++){
            if(a[j]>a[i])
            count++; }
        t[i]=count; }
    int var=0;
    for(int i=0;i<n;i++){
        printf("%d  ",a[i]); }
return 0; }