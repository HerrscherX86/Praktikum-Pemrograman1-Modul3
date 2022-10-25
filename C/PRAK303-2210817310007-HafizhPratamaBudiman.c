#include <stdio.h>

int main()
{
    int n;

printf("Nilai N : ");
scanf("%d", &n);

if (n>0) {
printf("\nNilai N adalah Positif\n");
}

else if (n<0) {
printf("\nNilai N adalah Negatif\n");
}

else {
printf("\nNilai N adalah Nol\n");
}
}