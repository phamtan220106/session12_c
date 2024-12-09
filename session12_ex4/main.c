#include <stdio.h>
#include <stdlib.h>
#define N 1000

int primeNumbers(int arr[N], int col);
int Array(int arr[N]);
int main()
{
    int max,arr[N],col;
    col=Array(arr);
    //nhap mảng
    max=primeNumbers( arr, col);
    //timf max
    printf("gia tri lon nhat la : %d",max);
    return 0;
}
int primeNumbers(int arr[],int col){
    int max=arr[0];
    for(int i=0;i<col;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;
}
int Array(int arr[]){
    int col;
    printf("nhap vao so phan tu cua mang: ");
    scanf("%d",&col);
    for(int i=0;i<col;i++){
        printf("arr[%d]\n",i+1);
        scanf("%d",&arr[i]);
    }
    return col;
}
