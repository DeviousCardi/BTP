#include <stdio.h>
int main() {
    int n, input, min;
    scanf("%d", &n);
    min=n;
    int loc_ent[200]={};
    for(int i=1;i<=2*n;i++) {
        scanf("%d", &input);
        if(loc_ent[input-1]==0)
            loc_ent[input-1]=i;
        else
            if(i-loc_ent[input-1]<min)
                min=i-loc_ent[input-1]; }
    printf("%d", min);
    return 0; }