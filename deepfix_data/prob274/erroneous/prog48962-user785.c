#include <stdio.h>
int main(){
    int n, t, j, k, room ,count = 0;
    scanf("%d",&n);
    int a[n + 1];
    a[0] = 0;
    for(i = 0; i < n; i++)
        scanf("%d",&a[i]);
    int b[1000];
    b[0] = 1;
    for(t = 1;count < 1  ; t++) {
        b[t] = a[b[t - 1]];
        if(count == 0){
            for(j = 0; j < t; j++) {
                if(b[t] == b[j]) {
                    room = b[t];
                    printf("%d  %d",j,t-j);
                    count++; } } } }
    return 0; }