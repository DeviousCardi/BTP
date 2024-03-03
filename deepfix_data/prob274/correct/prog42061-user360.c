#include <stdio.h>
int main(){
    int n, a[100], i, pos, ctr, freq[100], t, k, posn[100], j;
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    pos=1;
    for(i=0;i<100;i++)
      freq[i]=0;
    freq[0]=1;
    ctr=0;
    i=1;
    posn[0]=1;
    while(1) {
        pos=a[pos-1];
        freq[pos-1]++;
        ctr++;
        posn[i]=pos;
        if(freq[pos-1]>1) {
            t=ctr;
            for(j=1;;j--) {
                if(posn[pos-1-j]==posn[pos-1])
                {printf("%d",j);
                break;} }
            k=j;
            break; } }
    printf("%d %d",t,k);
    return 0; }