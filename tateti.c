#include <stdio.h>
#


/*
   Requisitos
   -Colocar nombre del juego
   -Recibir nombre del jugador (A) 
   -crear un bot (B)
   - Diferenciar jugadores
   -Mostrar reglas del juego
   -Definir Inicio del juego
   -Mostrar el tablero
   -Iniciar juego
   -Informar numero de movimientos
   -Informar progreso del juego, si gano o empato
   
*/ 
// nombre del juego
#define NOMBRE_JUEGO "TA.TE.TI"  
#define MAX_NOMBRE 100
#define NOMBRE_DEF_JUG_A "def nombre A"
#define NOMBRE_DEF_JUG_B "def nombre B"

#define INFO_REGLAS_JUEGO_PART1 "\t\t juego de 9 casillas \n\t\tdonde cada jugador alterna movimientos para formar 3 en linea\n\n"
#define INFO_REGLAS_JUEGO_PART2 "t\t se debe tratar de realizar una linea recta o diagonal por simbolo.\t\t"

#define MAX_FILA 3
#define MAX_COLUM 3

const char SIGN_JUGADOR_A = "X";
const char SIGN_JUGADOR_B = "0";

/* 
Descripcion: Recibir los nombres de los jugadores
Pre:"nombreJugadoresA" y "nombreJugadoresB" Correctamente definidos y asignados
Post: Asigna los nuevos nombres a "nombreJugadorA" y "nombreJugadorB"
*/

void recibirNombresJugadores(char nombreJugadorA[MAX_NOMBRE], char nombreJugadorB[MAX_NOMBRE]){
	printf("Ingrese nombre de jugador A\n");
	scanf("%s", nombreJugadorA);
	printf("Ingrese nombre de Jugador B\n");
	scanf("%s", nombreJugadorB);
	printf("Nombres asignados....\n");

}
/* Descripcion: Muestra la presentacion del juego
    pre: "nombreJugadorA" y "nombreJugadorB" correctamente definidos y asignados 

    post: Muestra NOMBRE_JUEGO, informacion del juego y los nombres de los jugadores actuales
*/
void presentarJuego(char nombreJugadorA[MAX_NOMBRE], char nombreJugadorB[MAX_NOMBRE]){
	 printf("\n\n\t\t****%s****\n\n",NOMBRE_JUEGO);
	 //INFO DEL JUEGO
    printf("\tinfo del juego:\n");
	 printf("%s\n",INFO_REGLAS_JUEGO_PART1);
	 printf("%s\n\n",INFO_REGLAS_JUEGO_PART2);
	 printf("nombre del Jugador A: %s\n",nombreJugadorA );
	 printf("nombre del Jugador B: %s\n",nombreJugadorB );
}
/*
    Descripcion: muestra el tablero actualizado
     Pre:"TABLERO" CORRECTAMENTE DEFINIDO Y ASIGNADO CON VALORES ACTUALES CORRESPONDIENTES
     Post: muestra el tablero con los valores actuales

*/
void mostrarTablero(char tablero[MAX_FILA][MAX_COLUM]){
   for (int fila=0; fila<MAX_FILA; fila++){
      for(int col=0; col<MAX_COLUM; col++){
         printf("[%c]" , tablero[fila][col]);
      }
      printf("\n\n);

   }
}
   
int main(){

    char tablero[MAX_FILA][MAX_COLUM]={};  
   	//nombres de los jugadores 
    char nombreJugadorA[MAX_NOMBRE] = NOMBRE_DEF_JUG_A;
    char nombreJugadorB[MAX_NOMBRE] = NOMBRE_DEF_JUG_B;

    recibirNombresJugadores(nombreJugadorA, nombreJugadorB);
    presentarJuego(nombreJugadorA, nombreJugadorB);
    //tablero
    mostrarTablero(tablero);
    tablero[0][0] = SIGN_JUGADOR_A;
    mostrarTablero(tablero);
    tablero[0][0]= SIGN_JUGADOR_B;
    mostrarTablero(tablero);

    return 0; 

void iniciarJuego(char tablero[MAX_FILA][MAX_COLUM]){
   char simbActual = SIGN_JUGADOR_A;
   int fila = -1;
   int col = -1;

   for (int turnos = 0; turnos < MAX_TURNOS; turnos ++){
      mostrarTablero(tablero);

      printf( "Ingrese fila\n");
      scanf("%i",fila);
      printf("ingrese columna\n");
      scanf("%i", &col);

      tablero[fila][col]=simbActual;

      //verificar estado gano o empate

      //alternar turnos
      if (simbActual == SIMB_JUGADOR_A){
         simbActual = SIMB_JUGADOR_B;
      }else{
         simbActual = SIGN_JUGADOR_A;
      }

   // verificaciones
      // movimiento 
      // informar turnos
   // simbActual = alternarTurno (simbActual); 

   }
   {
      
   }
}






   
   
 
}