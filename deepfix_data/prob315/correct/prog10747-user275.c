#include <stdio.h>
#include <stdlib.h>
int main() {
    int N, a[1000],count=0;
    scanf("%d",&N);
    int b[N];
    for(int i=0;i<N;i++){
        b[i]=0; }
    for(int i=0;i<N;i++){
        scanf("%d",&a[i]); }
    for(int i=0;i<N;i++){
        for(int j=i+1;j<N;j++){
            if(a[i]>a[j])
                count=count+1;
                b[i]=b[i]+1; } }
    printf("%d",count);
    for(int i=0;i<N;i++){
        printf("%d ",b[i]); }
	return 0; }