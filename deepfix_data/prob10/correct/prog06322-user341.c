#include<stdio.h>
int main() {
    int N, max, output=1;
    scanf("%d", &N);
    int input[N];
    int MaxTill[N];
    for(int i=0;i<N;i++)
        scanf("%d", &input[i]);
    for(int i=0;i<N;i++) {
        max=1;
        for(int j=0;j<i;j++) {
            if(input[j]<input[i]&&1+MaxTill[j]>max)
                max=1+MaxTill[j]; }
        MaxTill[i]=max;
        if(MaxTill[i]>output)
            output=MaxTill[i]; }
    printf("%d", output);
    return 0; }