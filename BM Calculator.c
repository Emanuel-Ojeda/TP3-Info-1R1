
#include <stdio.h>

float peso;
float altura;
float alturacuadrada;
float BMI;


int main()
{
    printf("Ingrese el peso en Kg:\t");
    scanf("%f",&peso);

    printf("Ingrese la altura en metro:\t");
    scanf("%f",&altura);
    
    alturacuadrada = altura * altura;
    
    BMI = peso / alturacuadrada;
    
    printf("Su indice de masa es: %.2f\n", BMI);
    
    if(BMI<18.5)
    { 
        printf("Usted tiene bajo peso\n\n");
    }
    else if ((BMI>= 18,5) && (BMI<=24.5) )
    { 
      printf("Usted tiene un peso normal\n\n");
    }
    else if ((BMI>=25) && (BMI<=29.9))
    {
        printf("usted tiene sobre peso\n\n");
    }
    else 
    { 
    printf("usted tiene obesidad\n\n");
    }
    
    printf("<18.8|Bajo Peso\nde 18.5 a 24.9|Peso Normal\nde 25 a 29.9|Sobrepeso\n>=30|Obesidad");
    return 0;
    

}
