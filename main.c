#include <stdio.h>
#include <math.h>

int main() {
  // Declaración de variables
  float base, altura, area;

  // Solicitar datos al usuario
  printf("Ingrese la base del triángulo: ");
  scanf("%f", &base);

  printf("Ingrese la altura del triángulo: ");
  scanf("%f", &altura);

  // Cálculo del área
  area = (base * altura) / 2;

  // Mostrar resultado al usuario
  printf("El área del triángulo es: %.2f unidades cuadradas\n", area);

  return 0;
}