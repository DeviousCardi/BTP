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
        for(a=0; a<2*n; a++) {
            if(a==j) {
                continue; }
            if(arr[j] == arr[a]) {
                for(b=0; b<n; b++) {
                    distance[b] = abs(j-a); } } } }
    int min = distance[0];
    for(b=1; b<n; b++) {
        if(distance[b] < min) {
           min = distance[b]; } }
    printf("%d",min);
    return 0; }