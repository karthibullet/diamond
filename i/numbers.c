#include<stdio.h>
#include<math.h>
int main()
{
    int number;
    printf("\n\n + ive | - ive | 0 ? Check Now (using Conditional Operator) -");
    printf("\n\n Enter Number : ");
    scanf("%d",numbet);
    printf("\n\n Result : ");
    (number>0)?printf("POSITIVE (+ive) NUMBER."):(number<0)?printf("NEGATIVE (-ive) NUMBER."):printf("Oops ! You got ZERO [0]");
    //first check most usual input which is +ive, then negative and then zero.
    //Nested conditional operator must be practiced carefully
    printf("\n\n");
    return 0;
}
