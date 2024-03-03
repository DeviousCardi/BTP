#include <stdio.h>
#include<math.h>
int main(){
    int n , i , j, k  ;
    scanf("%d",&n);
    int arr[2*n] , diff[n], min = 2*n;
    for(i = 0; i < 2*n ;i++)
        scanf("%d", &arr[i]);
    for( j = 0 ; j < 2*n ; j ++ ) {
        for( k = 0 ; k < 2*n ; k++) {
            if(arr[j] == arr[k]) {
                diff[j] = abs( k - j );
                if ( diff[j] < min) {
                    min = diff[j]; } } } }
    printf("%d",min);
    return 0; }