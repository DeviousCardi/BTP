#include <stdio.h>
int main() {
    int n, road_map[200];
    scanf("%d", &n);
    for(int i=0; i<2*n; i++) {
        scanf("%d", &road_map[i]); }
    int least_dis=(2*n-1);
    for(int i=0; i<2*n; i++) {
        for(int j=(i+1); j<2*n; j++) {
            if(road_map[j]==road_map[i])
                if(least_dis>(j-i))
                    least_dis=j-i; } }
    if(n=0)
        printf("0");
    else
    printf("%d", least_dis);
    return 0; }