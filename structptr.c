// Указатели на структуры
#include <stdio.h>

typedef struct
{
    char *name;
    char *population;
} City;

int main()
{
    City ny, la, ch, *ptr;
    ny.name = "Нью-Йорк";
    ny.population = "8,274,527";
    printf("\n%s, Население: %s человек.\n", ny.name, ny.population);
    ptr = &la;
    ptr -> name = "Лос Анджелес";
    ptr -> population = "5,884,343";
    printf("\n%s, Население: %s человек.\n", la.name, la.population);  
    ptr = &ch;
    ptr -> name = "Чикаго";
    ptr -> population = "6,464,643";
    printf("\n%s, Население: %s человек.\n", ptr->name, ptr->population);      
}