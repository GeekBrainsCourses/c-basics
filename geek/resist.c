#include <stdio.h>

int main(void)
{
    int Uo, Ui, R1, R2;
    R1 = Uo * R2 /(U1 - Uo);
    R2 = (R1 * (Ui - Uo))/Uo;
    Ui = (Uo * (R1 + R2)) / R1;
    Uo = Ui * (R1 / (R2 + R1));
}