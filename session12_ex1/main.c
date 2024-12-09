#include <stdio.h>
#include <stdlib.h>
int sum(int number1,int number2);
int main()
{// session 12_ex1
    int resout,number1,number2;
    resout=sum(number1, number2);
    printf("%d",resout);
    return 0;
}
int sum(int number1, int number2){
    printf("nhap vao hai so : \n");
    scanf("%d %d",&number1,&number2);
    int tong=number1+number2;
    return tong;
}
