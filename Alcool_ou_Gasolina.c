#include <stdio.h>

int main ()
{
    float preco_alcool, preco_gasolina, km_alcool, km_gasolina, consumo;

    printf("Qual o preco do litro do alcool?");

    scanf("%f", &preco_alcool);

    printf ("Qual o preco da gasolina?");

    scanf("%f", &preco_gasolina);

    printf("Quantos km/L seu carro faz com alcool?");
    scanf("%f", &km_alcool);

    printf("Quantos km/L seu carro faz com gasolina?");
    scanf("%f", &km_gasolina);

    consumo = ((km_alcool / km_gasolina) * 100) -1;

    printf("Seu ponto de equilibrio eh: %.0f\n", consumo);


     if ( (preco_alcool / preco_gasolina)*100 <= consumo)
     {
          printf ("Abasteca com Alcool.");
     }
     else if ( (preco_alcool / preco_gasolina)*100 > consumo)
     {
          printf ("Abasteca com gasolina");
     }
     else if ((preco_alcool / preco_gasolina)*100 == consumo)
     {
          printf ("Abasteca com gasolina");
     }

    return 0;
}
