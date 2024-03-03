#include<stdio.h>
int main() {
    int n,arr[20],i,j,maxtill[20],max=0,gr8_max=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    maxtill[0]=1;
    for(i=0;i<n;i++) {
        for(j=0;j<i;j++) {
            if(arr[i]>arr[j]) {
                if(maxtill[j]<max)
                    max=maxtill[j]; }
            else {
                    maxtill[j]=1;
                    if(maxtill[j]<max)
                    max=maxtill[j]; } }
        maxtill[i]=1+max;
        if(gr8_max<maxtill[i])
            gr8_max=maxtill[i]; }
    printf("%d",gr8_max);
    return 0; }