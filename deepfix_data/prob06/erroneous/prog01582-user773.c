#include <stdio.h>
#include <stdlib.h>
int main() {
    int n, m, x, y, i, flag, ctsol, ctvests, count=0;
    scanf("%d%d%d%d", &n, &m, &x,&y);
    min = m<n?m:n;
    int sol[n], vests[m], pairs[min][2];
    for(i=0;i<n;i++){
        scanf("%d", &sol[i]); }
    for(i=0; i<m; i++){
        scanf("%d", &vests[i]); }
    ctsol=0; ctvests=0;
    while(ctsol<n && ctvests<m){
        flag=0;
        if(sol[ctsol]>=(vests[ctvests]-x) && sol[ctsol]<=(vests[ctvests]+y) ){
            ctsol++;
            ctvests++;
            flag=1;
            count++; }
        else if(sol[ctsol]<vests[ctvests]-x){
            ctsol++; }
        else{
            ctvests++; }
        if(flag==1){
            pair[count-1][] = {ctsol, ctvests}; } }
    printf("%d\n", count);
    for(i=0;i<count;i++){
        for(j=0;j<2;j++){
            printf("%d %d\n", pair[i][0], pair[i][1]);) } }
	return 0; }