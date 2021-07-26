#include<stdio.h>
int main()
{   float n;

    printf("moi ban nhap");
    scanf("%f",&n);
    if (n==int(n))
    {
        if (int(n) % 2==0)
        {
        printf("day la so chan");
    
        }
        else
        {
        printf("day la so le le");
        }
    }
    else 
    {
        printf("khong hop le");
    }
