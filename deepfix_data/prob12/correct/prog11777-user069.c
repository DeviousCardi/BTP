#include <stdio.h>
#include <stdlib.h>
int main(){
    int n;
    int arr[400];
    scanf("%d",&n);
    int i;
    for(i=0; i<2*n; i++) {
        scanf("%d",&arr[i]); }
    int distance[200];
    int a,b,j;
    for(j=0; j<2*n; j++) {
        for(a=j+1; a<2*n; a++) {
            if(a==j) {
                continue; }
            if(arr[j] == arr[a]) { {
                    distance[arr[j]] = abs(j-a); } } } }
    int min = distance[0];
    for(b=0; b<n; b++) {
         printf("%d",distance[b]);
        if(distance[b] < min) {
           min = distance[b]; } }
    printf("%d",min);
    return 0; }