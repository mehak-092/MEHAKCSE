//C program to count number of digits in a number

#include<stdio.h>
int main()
{
    long int num;
    int count = 0, rem;

    printf("Enter a number: ");
    scanf("%ld", &num);

    while (num > 0)
    {
        num = num / 10;
        count++;
    }
    printf("Number of digits =%d", count);
    return 0;
}
