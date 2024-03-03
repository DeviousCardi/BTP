#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,m,x,y;
    int sold[100000], vest[100000];
    int i;
    for(i=0; i<n; i++)
    scanf("%d", &sold[i]);
    for(i=0; i<m; i++)
    scanf("%d", &vest[i]);
    int arr[100000][2];
    int count=0;
    i=0;
    int j=0;
    while(i<n && j<m) {
        if(sold[i]<=vest[j]+x && sold[i]>=vest[j]-y) {
            arr[count][0]=i;
            arr[count][1]=j;
            i++;
            j++;
            count++; }
        else if(sold[i]>vest[j]+x)
        i++;
        else if(sold[i]<vest[j]-y)
        j++; }
    printf("%d\n", count);
    for(i=0; i<count; i++) {
        printf("%d %d\n", arr[i][0], arr[i][1]); }
	return 0; }