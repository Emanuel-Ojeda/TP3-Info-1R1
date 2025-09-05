#include <stdio.h>

#include <math.h>

int calcularAreaRectangulo(int base,int altura);
int calcularPerimetroRectangulo(int base,int altura);
double calcularDiagonalRectangulo(int base,int altura);
double calcularAreaCirculo(double radio);
double calcularPerimetroCirculo(double radio);
void imprimirResultados(double radio, double perímetro);

int main()
{
    int select;
    int base, altura;
    double area, diagonal, radio, perimetro;
    
    // Inicio
    do{
    printf("1)Rectángulo\n2)Círculo\n");
    printf("Qué figura desea calcular?");
    scanf("%d",&select);
    
    if (select<1 || select>2) {
        printf("ERROR:Elija una opción válida\n");
    }
    
    }while (select<1 || select>2);
    
    //Opción 1:
    if (select==1){
        
     printf("Ingresa la base del rectangulo:\n");
     scanf("%d",&base);
     printf("Ingresa la altura del rectangulo:\n");
     scanf("%d",&altura);
    
    
     //Cálculos
     area=calcularAreaRectangulo(base, altura);
     perimetro=calcularPerimetroRectangulo(base, altura);
     diagonal=calcularDiagonalRectangulo(base, altura);
    
     //Imprimir resultados 
     imprimirResultados(area, perimetro);
     printf ("la diagonal del rectangulo es: %.2f", diagonal);
}


//Opción 2:
else if (select==2){
    printf("Ingresa el rádio: \n");
    scanf("%lf",&radio);
    
//Calculos    
area=calcularAreaCirculo(radio);    
perimetro=calcularPerimetroCirculo(radio);

//Imprimir
imprimirResultados(area, perimetro);
    
}


    return 0;
}

//----------------------FUNCIONES-----------------------------------------------
int calcularAreaRectangulo(int base,int altura){
 return base*altura;
}
int calcularPerimetroRectangulo(int base,int altura){
    return 2*(base+altura);
}
double calcularDiagonalRectangulo(int base,int altura){
    return sqrt(base * base + altura * altura);
}

double calcularAreaCirculo(double radio){
    return M_PI * pow(radio, 2);
}
double calcularPerimetroCirculo(double radio){
    return 2 * M_PI * radio;

    
}

void imprimirResultados(double area, double perimetro){
    printf("Area:%.2f\n", area);
    printf("perimetro:%.2f\n", perimetro);
}
