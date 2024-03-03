#include<stdio.h>
int main() {
    int n,i,j,max=1,count=1;
    int a[20];
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        scanf("%d ",&a[i]); }
    for(i=0;i<n;i++) {
        for(j=0;j<n;j++) {
            if(a[i]<a[j]) {
                count=count+1; }
            else{continue;} }
      if(count>max){max=count;}
        count=1; }
    printf("%d",max);
    return 0; }