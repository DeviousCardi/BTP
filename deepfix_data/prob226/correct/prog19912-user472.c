#include <stdio.h>
void input_arr(int a[],int size)
{for(int i=0;i<size;i++){
    scanf("%d",&a[i]); } }
int main() {
    int d,N;
    scanf("%d %d",&d,&N);
    int arr[20];
    input_arr(arr,d);
    printf("%d",arr[1]);
	 return 0; }