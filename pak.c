#include<stdio.h>
#include<conio.h>
void main()
{
    int n, givenNumber, rem, result = 0;

    printf("Enter a three digit integer: ");
    scanf("%d", &number);

    givenNumber = n;

    while (givenNumber != 0)
    {
        rem =givenNumber%10;
        result =result+ rem*rem*rem;
        givenNumber /= 10;
    }

    if(result == n)
        printf("%d is an Armstrong number.",n);
    else
        printf("%d is not an Armstrong number.",n);

    getch();
}
