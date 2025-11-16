
#include <stdio.h>
#define TAM 5


int main()
{
    
int codigo[TAM]={0};
float precio [TAM]={0};

 printf("Ingrese %d productos, se le solicitará su código y precio\n", TAM);
 
for (int i=0; i<TAM; i++){
    do{ 
        printf ("ingrese el código de barras (1-999999999:");
        scanf ("%d",&codigo[i] );
        
        if(codigo[i]<0 || codigo[i]>999999999){
            printf("ERROR:El código debe estar entre 1-999999999\n");
        }
    }while (codigo[i]<0 || codigo[i]>999999999);
    
    
  do{ 
        printf ("ingrese el precio del producto:");
        scanf ("%f",&precio[i]);
        
        if(precio[i]<0){
            printf("ERROR:El precio no puede ser negativo\n");
        }
    }while (codigo[i]<0);
    
    printf("\nCódigo     Precio\n\n");
    for (int i=0;i<TAM; i++){
        printf("%d     %.2f\n\n",codigo[i],precio[i]);
        
    }
}

float mayor, menor;
int codMayor, codMenor;

 mayor = precio[0];
menor = precio[0];
codMayor = codigo[0];
codMenor = codigo [0];

for (int i=0; i<TAM;i++){
    if (precio[i]>mayor){
        mayor = precio[i];
        codMayor = codigo[i];
    }
    
for (int i=0; i<TAM; i++){
    if(precio[i]<menor){
        menor=precio[i];
        codMenor= codigo[i];
    };
    }
}
    
printf("El más caro es: %d\t %f\n",codMayor,mayor);
printf("El más barato es: %d\t %f\n",codMenor,menor);



    return 0;
}
   