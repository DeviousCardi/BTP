#include <stdio.h>
int main(){
    int n, k;
    scanf("%d %d", &n, &k);
    int input[n], count[k+1], startidx[k+1], output[n];
    for (int i=0; i<n; i++){
        scanf("%d", input+i); }
    for(int i=0; i<=k; i++){
        *(count+i)=0; }
    for (int i=0; i<=k; i++){
        for (int j=0; j<n; j++){
            if(input[j]==i){
                count[i]++; } } }
    int total=0;
    for (int i=0; i<=k; i++){
        startidx[i]=total;
        total += count[i]; }
    int p=0;
    for (int i=1; i<=k; i++){
        for (int j=0; j<startidx[i]-startidx[i-1]; j++){
            output[p]=i-1;
            p++; } }
    for (int i=p; i<n; i++){
        output[i]=k; }
    for (int i=0; i<n; i++){
        printf("%d", output[i]); }
    return 0; }