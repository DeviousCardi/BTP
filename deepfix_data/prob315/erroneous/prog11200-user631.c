#include <stdio.h>
#include <stdlib.h>
int main() {
    int N;
    int a[1000];
    int count=0,counter[999];
    scanf("%d",&N);
    for(int i=0;i<N;i++){
        scanf("%d",&a[i]); }
    for(int i=0;i<(N-1);i++){
        counter[i]=0;
        for(int j=1;j<N;j++){
            if(a[i]>a[j]){
                count++;
                counter[i]++; } } }
    printf("%d\n",count);
    for(int i=0;i<(N-1);i++){
        printf("%d "counter[i]); }
	return 0; }