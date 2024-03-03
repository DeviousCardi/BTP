#include <stdio.h>
int arr[100]={0};
int n;
int getMaxLessThan(int upperLimit) {
    int max=0 , i;
    for ( i=0 ; i<n ; i++ ) {
        if ( arr[i] >= max && arr[i] < upperLimit )
            max = arr[i]; }
    printf("%d \n",max);
    return max; }
int main() {
    int i,k,upperLimit=0;
    scanf("%d %d",&n,&k);
    for ( i=0 ; i<n ; i++ )
        scanf("%d ",&arr[i]);
    for ( i=0 ; i<n ; i++ ) {
        if ( arr[i] >= upperLimit )
            upperLimit = arr[i]; }
    printf("%d\n",upperLimit);
    for ( i=0 ; i<k ; i++ )
        getMaxLessThan( upperLimit );
    return 0; }