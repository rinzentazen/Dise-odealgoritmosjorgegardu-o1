#include <stdio.h>

int main() {
  // Se declaran las variables para almacenar la fecha de nacimiento
  int dia, mes;

  // Se solicita al usuario que ingrese su día de nacimiento
  printf("Ingresa el día de tu nacimiento: ");
  scanf("%d", &dia);

  // Se solicita al usuario que ingrese su mes de nacimiento
  printf("Ingresa el mes de tu nacimiento: ");
  scanf("%d", &mes);

  // Se valida que el día y el mes sean válidos
  if (dia < 1 || dia > 31 || mes < 1 || mes > 12) {
    printf("Fecha de nacimiento inválida. Intenta nuevamente.\n");
    return 1;
  }

  // Se determina el signo zodiacal en base al día y el mes de nacimiento
  switch (mes) {
    case 1:
      if (dia <= 20) {
        printf("Tu signo zodiacal es Capricornio.\n");
      } else {
        printf("Tu signo zodiacal es Acuario.\n");
      }
      break;
    case 2:
      if (dia <= 19) {
        printf("Tu signo zodiacal es Acuario.\n");
      } else {
        printf("Tu signo zodiacal es Piscis.\n");
      }
      break;
    case 3:
      if (dia <= 20) {
        printf("Tu signo zodiacal es Piscis.\n");
      } else {
        printf("Tu signo zodiacal es Aries.\n");
      }
      break;
    case 4:
      if (dia <= 20) {
        printf("Tu signo zodiacal es Aries.\n");
      } else {
        printf("Tu signo zodiacal es Tauro.\n");
      }
      break;
    case 5:
      if (dia <= 21) {
        printf("Tu signo zodiacal es Tauro.\n");
      } else {
        printf("Tu signo zodiacal es Géminis.\n");
      }
      break;
    case 6:
      if (dia <= 21) {
        printf("Tu signo zodiacal es Géminis.\n");
      } else {
        printf("Tu signo zodiacal es Cáncer.\n");
      }
      break;
    case 7:
      if (dia <= 22) {
        printf("Tu signo zodiacal es Cáncer.\n");
      } else {
        printf("Tu signo zodiacal es Leo.\n");
      }
      break;
    case 8:
      if (dia <= 23) {
        printf("Tu signo zodiacal es Leo.\n");
      } else {
        printf("Tu signo zodiacal es Virgo.\n");
      }
      break;
    case 9:
      if (dia <= 23) {
        printf("Tu signo zodiacal es Virgo.\n");
      } else {
        printf("Tu signo zodiacal es Libra.\n");
      }
      break;
    case 10:
      if (dia <= 23) {
        printf("Tu signo zodiacal es Libra.\n");
      } else {
        printf("Tu signo zodiacal es Escorpio.\n");
      }
      break;
    case 11:
      if (dia <= 22) {
        printf("Tu signo zodiacal es Escorpio.\n");
      } else {
        printf("Tu signo zodiacal es Sagitario.\n");
      }
      break;
    case 12:
      if (dia <= 21) {
        printf("Tu signo zodiacal es Sagitario.\n");
      } else {
        printf("Tu signo zodiacal es Capricornio.\n");
      }
      break;
  }

  return 0;
}