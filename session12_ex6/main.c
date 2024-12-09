#include <stdio.h>
#include <stdlib.h>
int perfectNumber(int number);
int main()
{
    int a;
    printf("nhap vao mot so nguyen duong: ");
    scanf("%d",&a);
    if(perfectNumber(a)==1){
        printf("%d la so hoan hao.\n",a);
    }else{
        printf("%d khong phai la so hoan hao.\n",a);
    }
    return 0;
}
int perfectNumber(int number){
    int tong=0;
    for(int i=1;i<number;i++){
        if(number%i==0){
            tong+=i;
        }
    }
    if(tong==number){
        return 1;
    }else{
        return 0;
    }
}
