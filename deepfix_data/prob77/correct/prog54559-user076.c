#include <stdio.h>
int main() {
    int m,i,p,k,temp,ar[1000];
    scanf("%d",&m);
    for(i=0;i<m;i=i+1) {
        scanf("%d",&ar[i]); }
     k=ar[0];
     p=ar[m-1];
    for(i=0;i<m;i=i+1) {
        if(ar[i]>k) {
            k=ar[i]; }
        if(ar[i]<p) {
            p=ar[i]; } }
    temp=k;
    k=p;
    p=temp;
    printf("%d",ar[i]);
    printf("end");
    return 0; }