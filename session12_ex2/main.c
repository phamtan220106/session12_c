#include <stdio.h>
#include <stdlib.h>
#define N 100000
int Array(int arr[N]);
int main()
{
    int col,arr[N];
    col=Array(arr);
    for(int i=0;i<col;i++){
        printf("arr[%d] ",i+1);
        printf("%d\n",arr[i]);
    }
    printf("Hello world!\n");
    return 0;
}
int Array(int arr[N]){
    int col;
    printf("nhap vao so phan tu cua mang: ");
    scanf("%d",&col);
    for(int i=0;i<col;i++){
        printf("arr[%d]\n",i+1);
        scanf("%d",&arr[i]);
    }
    return col;
}
