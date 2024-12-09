#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int trueOrfalse(int number);
int main()
{
    int a,b;
    printf("nhap vao so a: ");
    scanf("%d",&a);
    printf("nhap vao so b: ");
    scanf("%d",&b);
    if(trueOrfalse(a)==1){
        printf("%d la so nguyen to.\n",a);
    }else{
        printf("%d khong phai la so nguyen to.\n",a);
    }
    if(trueOrfalse(b)==1){
        printf("%d la so nguyen to.\n",b);
    }else{
        printf("%d khong phai la so nguyen to.\n",b);
    }
    return 0;
}
int trueOrfalse(int number){
    if(number<=1){
        return 0;
    }else{
        for(int i=2;i<=sqrt(number);i++){
            if(number%i==0){
                return 0;
            }
        }
        return 1;
    }
}
