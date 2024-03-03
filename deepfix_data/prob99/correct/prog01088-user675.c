#include<stdio.h>
int main() {
    int n,max=0;
    int a[1000];
    scanf("%d\n",&n);
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(int i=0;i<n;i++){
        int c=1;
        int d=a[i];
        for(int j=i+1;j<n;j++){
            if(a[j]>d){
                c++;
                d=a[j]; } }
        if(c>max)
            max=c; }
    printf("%d",max);
    return 0; }