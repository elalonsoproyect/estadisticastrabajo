#include <stdio.h>
#include <stdlib.h>

int main() {


  struct datos{
        char nombre[40];
        int partidosg;
        int partidose;
        int partidosp;
    };
     struct datos equipos[30];
    int n,i;
    FILE *ap;
    ap=fopen("futbol.txt","a");
    if(ap!=NULL){
    printf("Cuantos equipos quieres ingresar: ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("Dame el nombre del equipo %d: ",i+1);
        fflush(stdin);
        gets(equipos[i].nombre);

        printf("cuantos partidos ganados de quipo %d: ",i+1);
         fflush(stdin);
        scanf("%d",&equipos[i].partidosg);

        printf("cuantos partidos empatados del equipo %d: ",i+1);
         fflush(stdin);
        scanf("%d",&equipos[i].partidose);

        printf("cuantos partidos perdidos del equipo %d: ",i+1);
        fflush(stdin);
       scanf("%d",&equipos[i].partidosp);

    }
for(i=0;i<n;i++){
 printf("\nel equipo %s tiene %d partidos gannados , tiene %d partidos empatados y  %d partidos perdidos \n\n\n ",equipos[i].nombre,equipos[i].partidosg,equipos[i].partidose,equipos[i].partidose);
 fprintf(ap,"\nel equipo %s tiene %d partidos gannados , tiene %d partidos empatados y  %d partidos perdidos \n\n\n ",equipos[i].nombre,equipos[i].partidosg,equipos[i].partidose,equipos[i].partidose);
    fputs("\n",ap);
}

    }
    else
        printf("Error en la apertura del archivo.");
    fclose(ap);

    return 0;
}
