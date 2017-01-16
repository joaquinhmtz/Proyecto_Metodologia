#include <stdio.h>
#include <stdlib.h>
//DECLARACION DE LAS VARIABLES
//0-9, ES PARA QUE INICIE DESDE LA POSICION 0
char tablero[10][10];
int i;
int j;
int jugada1;
int jugada2;
int jug1 = 9;
int jug2 = 9;
int jug3 = 9;
int jug4 = 9;
int jug5 = 9;
int jug6 = 9;
int jug7 = 9;
int jug8 = 9;
int jug9 = 9;
int jug10 = 9;
int gan1 = 0;
int gan2 = 0;
int finalizar = 0;
int X = 0;

int main(void) {

//CREACION DEL TABLERO
   for (i = 0; i < 10; i++) {
       for (j = 0; j < 10; j++) {
           tablero[i][j] = '_';
       }
   }


   printf("  1   2   3   4   5   6   7   8   9   10\n");
   for (i = 0; i < 10; i++) {
       for (j = 0; j < 10; j++) {
           printf(" |");
           printf("%c", tablero[i][j]);
           printf("|");
       }
       printf("\n ---------------------------------------\n");
   }
   printf("\n\n\n\n");

//CASOS DEL JUGADOR PARA CADA JUGADA, DE ARRIBA HACIA ABAJO, PARA QUE VAYA OCUPANDO LAS CASILLAS DE LA COLUMNA
   do {

       printf("TURNO DEL JUGADOR 1:\n");
       scanf("%d", &jugada1);


       switch (jugada1) {
           case 1:
               tablero[jug1][jugada1 - 1] = 'J';
               jug1 = jug1 - 1;
               break;
           case 2:

               tablero[jug2][jugada1 - 1] = 'J';
               jug2 = jug2 - 1;
               break;
           case 3:
               tablero[jug3][jugada1 - 1] = 'J';
               jug3 = jug3 - 1;
               break;
           case 4:
               tablero[jug4][jugada1 - 1] = 'J';
               jug4 = jug4 - 1;
               break;
           case 5:
               tablero[jug5][jugada1 - 1] = 'J';
               jug5 = jug5 - 1;
               break;
           case 6:
               tablero[jug6][jugada1 - 1] = 'J';
               jug6 = jug6 - 1;
               break;
           case 7:
               tablero[jug7][jugada1 - 1] = 'J';
               jug7 = jug7 - 1;
               break;
           case 8:
               tablero[jug8][jugada1 - 1] = 'J';
               jug8 = jug8 - 1;
               break;
           case 9:
               tablero[jug9][jugada1 - 1] = 'J';
               jug9 = jug9 - 1;
               break;
           case 10:
               tablero[jug10][jugada1 - 1] = 'J';
               jug10 = jug10 - 1;
               break;
       }

       printf("  1   2   3   4   5   6   7   8   9   10\n");
       for (i = 0; i < 10; i++) {
           for (j = 0; j < 10; j++) {
               printf(" |");
               printf("%c", tablero[i][j]);
               printf("|");
           }
           printf("\n ---------------------------------------\n");

       }
       printf("\n\n\n\n");


//COMPROBACION DE COLUMNAS HACIA ARRIBA, COLUMNAS HACIA ABAJO, COMPROBACION DE FILAS HACIA LA DERECHA, HACIA LA IZQUIERDA, DIAGONAL HACIA ARRIBA, DIAGONAL HACIA ABAJO 
       for (i = 0; i < 10; i++) {
           for (j = 0; j < 10; j++) {
               if (tablero[i][j] == 'J' & tablero[i][j + 1] == 'J' & tablero[i][j + 2] == 'J' & tablero[i][j + 3] == 'J' || tablero[i][j] == 'J' & tablero[i][j - 1] == 'J' & tablero[i][j - 2] == 'J' & tablero[i][j - 3] == 'J' || tablero[i][j] == 'J' & tablero[i + 1][j] == 'J' & tablero[i + 2][j] == 'J' & tablero[i + 3][j] == 'J' || tablero[i][j] == 'J' & tablero[i - 1][j] == 'J' & tablero[i - 2][j] == 'J' & tablero[i - 3][j] == 'J' || tablero[i][j] == 'J' & tablero[i + 1][j + 1] == 'J' & tablero[i + 2][j + 2] == 'J' & tablero[i + 3][j + 3] == 'J' || tablero[i][j] == 'J' & tablero[i + 1][j - 1] == 'J' & tablero[i + 2][j - 2] == 'J' & tablero[i + 3][j - 3] == 'J') {
                   gan1 = gan1 + 1; //PARA QUE LAS CASILLAS NO SE VAYAN REPITIENDO
               }
           }
       }

       if (gan1 < 1) {
           printf("TURNO DEL JUGADOR 2:\n");
           scanf("%d", &jugada2);


           switch (jugada2) {
               case 1:
                   tablero[jug1][jugada2 - 1] = 'T';
                   jug1 = jug1 - 1;
                   break;
               case 2:

                   tablero[jug2][jugada2 - 1] = 'T';
                   jug2 = jug2 - 1;
                   break;
               case 3:
                   tablero[jug3][jugada2 - 1] = 'T';
                   jug3 = jug3 - 1;
                   break;
               case 4:
                   tablero[jug4][jugada2 - 1] = 'T';
                   jug4 = jug4 - 1;
                   break;
               case 5:
                   tablero[jug5][jugada2 - 1] = 'T';
                   jug5 = jug5 - 1;
                   break;
               case 6:
                   tablero[jug6][jugada2 - 1] = 'T';
                   jug6 = jug6 - 1;
                   break;
               case 7:
                   tablero[jug7][jugada2 - 1] = 'T';
                   jug7 = jug7 - 1;
                   break;
               case 8:
                   tablero[jug8][jugada2 - 1] = 'T';
                   jug8 = jug8 - 1;
                   break;
               case 9:
                   tablero[jug9][jugada2 - 1] = 'T';
                   jug9 = jug9 - 1;
                   break;
               case 10:
                   tablero[jug10][jugada2 - 1] = 'T';
                   jug10 = jug10 - 1;
                   break;
           }



           printf("  1   2   3   4   5   6   7   8   9   10\n");
           for (i = 0; i < 10; i++) {
               for (j = 0; j < 10; j++) {
                   printf(" |");
                   printf("%c", tablero[i][j]);
                   printf("|");
               }
               printf("\n ---------------------------------------\n");

           }
           printf("\n\n\n\n");




           for (i = 0; i < 10; i++) {
               for (j = 0; j < 10; j++) {
                   if (tablero[i][j] == 'T' & tablero[i][j + 1] == 'T' & tablero[i][j + 2] == 'T' & tablero[i][j + 3] == 'T' || tablero[i][j] == 'T' & tablero[i][j - 1] == 'T' & tablero[i][j - 2] == 'T' & tablero[i][j - 3] == 'T' || tablero[i][j] == 'T' & tablero[i + 1][j] == 'T' & tablero[i + 2][j] == 'T' & tablero[i + 3][j] == 'T' || tablero[i][j] == 'T' & tablero[i - 1][j] == 'T' & tablero[i - 2][j] == 'T' & tablero[i - 3][j] == 'T' || tablero[i][j] == 'T' & tablero[i + 1][j + 1] == 'T' & tablero[i + 2][j + 2] == 'T' & tablero[i + 3][j + 3] == 'T' || tablero[i][j] == 'T' & tablero[i + 1][j - 1] == 'T' & tablero[i + 2][j - 2] == 'T' & tablero[i + 3][j - 3] == 'T') {
                       gan2 = gan2 + 1;
                   }
               }
           }
       }

   //CONTADOR PARA LOS TIROS DE CADA JUGADOR QUE TIENE
       X = X + 1;
//SI JUGADOR 1 GANA FINALIZA JUEGO, SI JUGADOR 2 GANA FINALIZA JUEGO, SI AMBOS JUGADORES EXCEDEN DE LOS TIROS PERMITIDOS FINALIZA JUEGO.

       if (gan1 != 0) {
           finalizar = 1;
       }
       if (gan2 != 0) {
           finalizar = 1;
       }
       if (X > 35) { 
           finalizar = 1;
       }


   } while (finalizar < 1);

   printf("\n\n");
   printf("JUEGO TERMINADO");



}