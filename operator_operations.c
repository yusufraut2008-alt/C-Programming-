
#include <stdio.h>
#include <conio.h>

void main()
{
    int a, b;

    clrscr();

    printf("\nEnter the two numbers: ");
    scanf("%d",&a,&b);

    printf("\n--- ARITHMETIC OPERATORS ---");
    printf("\nAddition = %d", a + b);
    printf("\nSubtraction = %d", a - b);
    printf("\nMultiplication = %d", a * b);

    if(b != 0)
    {
        printf("\nDivision = %d", a / b);
        printf("\nModulus = %d", a % b);
    }
    else
    {
        printf("\nDivision and Modulus not possible");
    }

    printf("\n\n--- RELATIONAL OPERATORS ---");
    printf("\na > b = %d", a > b);
    printf("\na < b = %d", a < b);
    printf("\na == b = %d", a == b);
    printf("\na != b = %d", a != b);
    printf("\na >= b = %d", a >= b);
    printf("\na <= b = %d", a <= b);

    printf("\n\n--- ASSIGNMENT OPERATORS ---");
    a += b;
    printf("\na += b = %d", a);
    a -= b;
    printf("\na -= b = %d", a);
    a *= b;
    printf("\na *= b = %d", a);

    if(b != 0)
    {
        a /= b;
        printf("\na /= b = %d", a);
        a %= b;
        printf("\na %%= b = %d", a);
    }

    printf("\n\n--- LOGICAL OPERATORS ---");
    printf("\nAND = %d", (a > b) && (a != b));
    printf("\nOR = %d", (a > b) || (a == b));
    printf("\nNOT = %d", !(a > b));

    printf("\n\n--- INCREMENT/DECREMENT ---");
    printf("\nIncrement = %d", ++a);
    printf("\nDecrement = %d", --a);

    printf("\n\n--- BITWISE OPERATORS ---");
    printf("\nAND = %d", a & b);
    printf("\nOR = %d", a | b);
    printf("\nXOR = %d", a ^ b);
    printf("\nNOT of a = %d", ~a);
    printf("\nLeft Shift = %d", a << 1);
    printf("\nRight Shift = %d", a >> 1);

    printf("\n\n--- CONDITIONAL OPERATOR ---");
    printf("\nGreater number = %d", (a > b) ? a : b);

    getch();
}
