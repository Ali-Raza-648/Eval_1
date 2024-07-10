#include<stdio.h>

int main(void)
{
    //Step 1:Lets Create and Intilaize Registers With The Following Values
    register int Q = 10; //Dividend
    register int M = 2; // Divisor
    register int A = 0; // Reminder
    register int n = 4; // Number of bits in Q as 10 = (1010)
    
    if (n==0)
    {
        printf("Quetient in Register Q = %d  and Reminder in Register A = %d",Q,A);
        return 0; //Stop
    }

    while (n != 0)
    {
        Q = Q << 1;
        A = A << 1; // I am Left Shift Both By One Unit

        A = A - M;

        int i = sizeof(A);

        if (A & (1 << (8 * i))) // Check Most Sifnificant Bit  Condition True When MSB is 1
        {
            
        }
    }
}