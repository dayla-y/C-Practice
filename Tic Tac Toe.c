#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*Notas:
1. Void es una función que no regresa nada, por lo que para declarar, pensé que era más adecuado.
2. No pude poner el nombre del segundo jugador por más que lo intenté,  pero está en la línea de código #191, por si acaso.
3. Se rompe cuando pones una letra, aunque se debería de meter en el caso else, quiso a medias, porque muestra "Ese movimiento no se puede hacer", como
si de Diavolo se tratara.
4. "Si ninguno gana, que se repita el juego" No se hace de forma automática, pero si presionas la letra "Y", sí se repite. En caso de presionar cualquier
otra cosa se termina el juego. Lo quise cambiar por palabras, pero no quiere por más que intente ;w;
5. 2 opciones de juego, contra la computadora y contra un segundo jugador.

*********Recuerda poner el archivo .c en el inicio de la memoria.

Intrucciones generales:
Se manda en .c, en parejas, de las 8:15 a 8:20, hasta las 10, se va a mostrar el código.
Se va a hacer un proyecto del juego del gato, ya que es una matriz de 3x3, se pueden imprimer por corchetes de cada una de las posiciones.

printf("Ingrese posición, números entre 1 y 3");

Si ingresa otro número, que lo vuelva a pedir.

La siguiente se debe mostrar
Luego por jugador se debe de aparecer en pantalla.

Si una casilla ya está ocupada, entonces que lo vuelva a pedir.
Si ninguno gana, que se repita el juego.
En caso de que gane, se imprima el jugador que ganó la partida.
Ciclos, arreglos, condiciones.

Se pueden usar "O" Y "x".

Se van a probar las condiciones, desde el mensaje de error hasta el cómo se imprime en pantalla.

Como se va a revisar, no es necesario un reporte.
Allí mismo se va a dar la calificación final.

El 13 hace entrega. Cubículo 212.

Para las tareas, se hará una asignación, donde se hará una asignación con todos los archivos.
*/

char board[3][3];
int i,j,a;
const char Jugador = 'X';
const char Player = 'O';
const char Bot = 'O';

void reiniciarTablero();
void elTablero();
int checkFreeSpaces();
void player1Move();
void player2Move();
void computerMove();
char checkWinner();
void printWinner(char);


int main()
{
   char winner = ' ';
   char response = ' ';
 
	printf("¿Cuantos jugadores?\n");
	printf("¿1 o 2?\n");
	printf("Si eliges mas de dos, vas a jugar por default contra la computadora\t", &a);
	scanf("%d", &a);
   do
   {
      winner = ' ';
      response = ' ';
      reiniciarTablero();

      while(winner == ' ' && checkFreeSpaces() != 0)
      {
         elTablero();

         player1Move();
         
         if (a==2){
		 player2Move();
         winner = checkWinner();
         if(winner != ' ' || checkFreeSpaces() == 0)
         {
            break;
         }
		 }


         else {
		 
         computerMove();
         winner = checkWinner();
         if(winner != ' ' || checkFreeSpaces() == 0)
         {
            break;
         }
         }
         
         winner = checkWinner();
         if(winner != ' ' || checkFreeSpaces() == 0)
         {
            break;
         }
         
         
      }

      elTablero();
      printWinner(winner);

      printf("\n¿Jugamos otra vez?\nPresiona Y para volver a jugar  ");
      scanf("%c");
      scanf("%c", &response);
      response = toupper(response);
   } while (response == 'Y');

   printf("Gracias por jugar");

   return 0;
}

void reiniciarTablero()
{
   for(i = 0; i < 3; i++)
   {
      for(j = 0; j < 3; j++)
      {
         board[i][j] = ' ';
      }
   }
}
void elTablero()
{
   printf(" %c | %c | %c ", board[0][0], board[0][1], board[0][2]);
   printf("\n---|---|---\n");
   printf(" %c | %c | %c ", board[1][0], board[1][1], board[1][2]);
   printf("\n---|---|---\n");
   printf(" %c | %c | %c ", board[2][0], board[2][1], board[2][2]);
   printf("\n");
}
int checkFreeSpaces()
{
   int freeSpaces = 9;

   for(i = 0; i < 3; i++)
   {
      for(j = 0; j < 3; j++)
      {
         if(board[i][j] != ' ')
         {
            freeSpaces--;
         }
      }
   }
   return freeSpaces;
}
void player1Move()
{

	
   int x;
   int y;

   do
   {
  	
      printf("Jugador");
	  printf("\nNumero de fila #(1-3): ");
      scanf("%d", &x);
      x--;
      printf("Numero de columna #(1-3): ");
      scanf("%d", &y);
      y--;

      if(board[x][y] != ' ')
      {
         printf("Eso no se puede hacer\n");
      }
        else
      {
         board[x][y] = Jugador;
         break;
      }
      
   } while (board[x][y] != ' ');
   
}
void player2Move()
{

   int x;
   int y;

   do
   {
	  printf("\n\tJugador 2\nNumero de fila #(1-3): ");
      scanf("%d", &x);
      x--;
      printf("Numero de columna #(1-3): ");
      scanf("%d", &y);
      y--;

      if(board[x][y] != ' ')
      {
         printf("Ese movimiento no esta permitido.\n");
      }
        else
      {
         board[x][y] = Player;
         break;
      }
      
   } while (board[x][y] != ' ');
   
}
void computerMove()
{
   srand(time(0));
   int x;
   int y;

   if(checkFreeSpaces() > 0)
   {
   			
		
		 
      do
      {
         x = rand() % 3;
         y = rand() % 3;
      } while (board[x][y] != ' ');
      
      board[x][y] = Bot;
   }
   else
   {
      printWinner(' ');
   }
}
char checkWinner()
{

   //Revisa las filas
   for(i = 0; i < 3; i++)
   {
      if(board[i][0] == board[i][1] && board[i][0] == board[i][2])
      {
         return board[i][0];
      }
   }
   //Este va a revisar las columnas :>
   for(i = 0; i < 3; i++)
   {
      if(board[0][i] == board[1][i] && board[0][i] == board[2][i])
      {
         return board[0][i];
      }
   }
   //Y este revisa las diagonales
   if(board[0][0] == board[1][1] && board[0][0] == board[2][2])
   {
      return board[0][0];
   }
   if(board[0][2] == board[1][1] && board[0][2] == board[2][0])
   {
      return board[0][2];
   }

   return ' ';
}
void printWinner(char winner)
{
   if(winner == Jugador)
   {
      printf("Gana primer jugador");
   }
   else if(winner == Bot)
   {
      printf("Perdiste :p");
   }
   else if(winner == Player){
   		printf("El segundo jugador ha ganado.");
   }
   else{
      printf("No hay ganador");
   }
}
