#include <stdio.h>
int main(){
    int n=0;
    scanf("%d",&n);
    int a[n];
    int i,j,k,count =0;
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    for (i=0;i<100;i++) {
        for(j=0;j<n;j++) {
            if (a[j]== i) {
                count = count +1; } }
        for(k=0;k<count;k++) {
            printf("%d ",i); }
        count =0; }
    printf("end");
    return 0; }