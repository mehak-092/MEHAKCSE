//Write a C program to find frequency of each digit in a given integer.

#include<stdio.h>

int main()
{
    long int ctr , n , i , j , r ;
    printf("\n\n Find frequency of each digit in a given integer:\n");
    printf("-----------------------------------------------------\n");
    printf(" Input any number: ");
    scanf("%ld",&n);
    for (i = 0; i < 10; i++)
    {
        printf("The frequency of %ld",i," = ");
        ctr = 0;
        for (j = n; j > 0; j = j / 10)
        {
            r = j % 10;
            if (r == i)
            {
                ctr++;
            }
        }
        printf(" %ld \n",ctr );
    }
}
