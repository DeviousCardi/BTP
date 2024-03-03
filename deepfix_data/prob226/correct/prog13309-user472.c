#include <stdio.h>
void input_arr(int a[],int size)
{for(int i=0;i<size;i++){
    scanf("%d",&a[i]); } }
int main() {
    int d,N;
    scanf("%d %d",&d,&N);
    int arr[20];
    input_arr(arr,d);
    int a[30];
    {for(int i=0;i<d;i++){a[i]=arr[i];}}
    for(int i=d;i<=N;i++)
    {a[i]=0;
        for(int j=i;j>=0;j--){a[i]=a[i]+a[j];} }
    printf("%d",a[N-1]);
	 return 0; }