#include <stdio.h>
int main(){
    int n,i,x,t,k,j;
    scanf("%d",&n);
    int a[n],b[300];
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    for(i=0;i<n;i++) {
        if(a[i]==1) {
            for(x=a[i-1];x-1<n;i=x) {
                j=0;
                x=a[x-1];
                b[j]=x;
                j++;
                scanf("%d",&b[j]);
                for(j=1;j<300;j++) {
                    t=0;
                    if(b[0]!=b[j]) {
                        t++; }
                    else {
                        printf("%d ",t);
                        break; } }
                for(j=2;j<300;j++) {
                    k=0;
                    if(b[1]!=b[j]) {
                        k++; }
                    else {
                        printf("%d",k);
                        break; } }
                break; } } }
    return 0; }