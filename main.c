#include <stdio.h>
/*Napisz program, ktory pobierze od uzytkownika wzrost w cm i wage w kg oraz obliczy BMI wg wzoru:
 * waga[kg](wrost)2[m] i wyswietli na konsoli nastepujacy tekst wraz z wyliczona wartoscia BMI:
 * Twoje BMI wynosi:*/
int main() {
    int wzrost, waga;
    float BMI;
    printf("Podaj wzrost w cm:");
    scanf("%d", &wzrost);
    printf("Podaj wage w kg:");
    scanf("%d", &waga);
    BMI=(waga/((wzrost/100)^2));
    printf("Twoje BMI wynosi:%d",BMI);
    getchar();
    return 0;
}
