#include <stdio.h>
 int main() {
struct horario{
int horas;
int minutos;
int segundos;

};
struct horario agora;

agora.horas=16;
agora.minutos=03;
agora.segundos=56;
printf("%i :%i :%i",agora.horas,agora.minutos,agora.segundos);
  return 0;
}
