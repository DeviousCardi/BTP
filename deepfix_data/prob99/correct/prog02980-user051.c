#include<stdio.h>
int main() {
    int n,arr[20],i,j,maxtill[20],max,gr8_max=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    maxtill[0]=1;
    for(i=1;i<n;i++) {
        for(j=0;j<i;j++) {
            max=0;
            if(arr[i]>arr[j]) {
                maxtill[i]=maxtill[j]+1;
                if(maxtill[i]<max)
                    max=maxtill[i];
                printf("(%d)",maxtill[i]); }
            else {
                    maxtill[i]=1;
                    if(maxtill[i]<max)
                        max=maxtill[i]; } }
        maxtill[i]=max;
        if(gr8_max<maxtill[i])
            gr8_max=maxtill[i]; }
    printf("%d",gr8_max);
    return 0; }