#include <stdio.h>
int main() {
    int i,n, room[105],t=0,k=0,j;
    scanf("%d", &n);
    room[0]=1;
    for(i=1; i<n; i++) {
            scanf("%d", &room[i]); }
    for(i=0; i<n-1; i++) {
           for(j=i+1; j<n; j++) {
                    if(room[i]==room[j]) {
                            break; }
                    else
                        k++; } }
    printf("%d",k);
    return 0; }