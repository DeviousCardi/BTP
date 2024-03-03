#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int exitto[n];
    for (int i=0; i<n; i++) {
        scanf("%d", &exitto[i]);
        printf("%d\t", exitto[i]); }
    int t=0;
    int roomcount[n];
    for (int i=0; i<n; i++) {
        roomcount[i]=0; }
    int current=0;
    do {
       current=exitto[current];
       roomcount[current-1]++;
       t++;
    }while(roomcount[current-1]<=1);
    int k=0;
     do {
       current=exitto[current];
       roomcount[current-1]++;
       k++;
    }while(roomcount[current-1]<=1);
    printf("%d %d", t,k);
    return 0; }