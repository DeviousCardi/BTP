#include <stdio.h>
#include <stdlib.h>
int main() {
    int N,i,j,c=0;;
    scanf("%d",&N);
    int a[N],b[N];
    for(i=0;i<N;i++) {
        scanf("%d",&a[i]);
        b[i]=0; }
    for(i=0;i<N;i++) {
        for(j=i+1;j<N;j++) {
            if(a[j]<a[i]) {
                b[i]++;
                c++; } } }
    printf("%d\n",c);
    for(i=0;i<N;i++)
        printf("%d ",b[i]); }