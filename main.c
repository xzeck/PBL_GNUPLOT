#include <stdio.h>
#include <stdlib.h>

int MagneticField()
{
    char Type;
    printf('\nEnter the type of magnetic field you want to simulate');
    scanf("%c",&Type);

    switch(Type)
    {

    }

}

int ElectricField()
{

}



int main()
{
    char FieldType;

    repeat :

    printf("Enter the type of field your want");
    printf("\nM : Magnetic Field\nE:Electric Field");

    scanf("%c", &FieldType);

    switch(FieldType)
    {
        case 'M':
        case 'm':
            MagneticField();
            break;

        case 'E':
        case 'e':
            ElectricField();
            break;


        default :
            printf("\nEnter proper values:");
            goto repeat;

            break;


    }

}