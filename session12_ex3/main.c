#include <stdio.h>
#include <stdlib.h>
int factorial(int number,int product);
int main()
{
    int number,product;
    int resout=factorial(number,product);
    printf("%d\n",resout);
    printf("Hello world!\n");
    return 0;
}
int factorial(int number,int product){
    product=1;
    printf("nhap vao mot so nguyen: ");
    scanf("%d",&number);
    for(int i=number;i>=1;i--){
        product*=i;
    }
    return product;
}
