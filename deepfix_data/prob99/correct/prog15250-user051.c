#include<stdio.h>
int main() {
    int n,arr[20],i,j,maxtill[20],max,gr8_max=1;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    maxtill[0]=1;
    for(i=1;i<n;i++) {
        maxtill[i]=1;
        max=0;
        for(j=0;j<i;j++) {
            if(arr[i]>arr[j]) {
                maxtill[i]=maxtill[j]+1;
                if(maxtill[i]>max)
                    max=maxtill[i];
                printf("(%d)",maxtill[i]); }
            else {
                if(maxtill[i]<1)
                    maxtill[i]=1;
                printf("{%d}",maxtill[i]); } }
        maxtill[i]=max;
        if(gr8_max<maxtill[i])
            gr8_max=maxtill[i]; }
    printf("%d",gr8_max);
    return 0; }