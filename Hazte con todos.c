#include <stdio.h>
#define N 100

struct equipo {
	char pokemon1[N];
	char pokemon2[N];
	char pokemon3[N];
	int nPotis;
};	
int main (){
  struct equipo pokemon[N]
  int numero_pokedex;
  int seleccion,volver,i;
  char entrenador[N];

	printf("-------------------------------------\n");
	printf("\t*Bienvenido a tu Hemeroteca de pokemons, 'HAZTE CON TODOS'*\n");
	printf("-------------------------------------\n");
	
  do{
	printf("\t Pulse 1 para entrar al menu de la Pokedex\n");
  	printf("\t Pulse 2 para entrar al creador de equipos\n");
	printf("\t Si quiere salir pulse 3\n");
	printf("\t Y si desea saber mas acerca de nosotras pulse 4\n");
	printf("-------------------------------------\n");
	scanf("%d", &seleccion);
		
		switch(seleccion){
			case 1:
				volver=0;
				
				printf("\tIntroduce tu nombre de entrenador:\n");
				scanf("%s", entrenador);
				printf("\tBienvenido al menu %s, aqui podra seleccionar el pokemon del que deseas saber acerca\n",entrenador);
				printf("\tAhora introduzca el numero del pokemon que quieres ver\n"); //De aqui mandara al numero d las pokedex a la que corresponde el pokemon, en el cual se mostrara toda la informacion
				scanf("%d", &numero_pokedex);
			break;
			
			case 2:
				volver=0;
				
			
			case 3:
				printf("\t!!!Hasta la proxima!!!\n");	
			return 0;
			
			case 4:
				volver=0;
				
				printf("\tLos creadores de este proyecto somos:\n");
				printf("\tConstantino Janeiro Catena\n");
				printf("\tAdrian Langarica Esteban\n");
				printf("\tRuben Ernesto Godoy Salcedo\n");                                                            
				printf("\tPulse 1 si desea volver a la pantalla de inicio o 2 si quiere salir\n");
				scanf("%d", &seleccion);
				
				switch(seleccion){
					case 1:
						printf("\tHas elegido volver al menu\n");
						volver++;
					break;
					case 2:
						printf("\t!!!Hasta la proxima!!");
					return 0;
				}
			break;
		}
	}
	while(volver==1);
    
return 0;
}
