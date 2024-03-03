#include <stdio.h>
int main(){
    int n, a[100], i, posn[100], freq[100], rno, t, k;
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    posn[0]=1;
    i=1;
    while(1) {
        rno=posn[i-1];
        posn[i]=a[rno];
        freq[a[rno]]++;
        i++;
        if(freq[a[rno]]>1) {
            for(j=0;j<i;j++) {
                if(posn[j]==posn[i])
                break; }
            t=i;
            k=j; } }
    printf("%d %d",t,k);
    return 0; }