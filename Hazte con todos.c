#include <stdio.h>
#include <string.h>
#define N 100

struct equipo {
	char pokemon1[N];
	char pokemon2[N];
	char pokemon3[N];
	int nPotis;
};	
int main (){
  struct equipo pokemons[N];
  int npokedex;
  int seleccion,volver,i;
  char entrenador[N];

	printf("\t---------------------------------\n");
	printf("\t|*Bienvenido a'HAZTE CON TODOS'*|\n");
	printf("\t---------------------------------\n");
	
  do{
	printf("\t|Pulse 1 para entrar al menu de la Pokedex \n");
  	printf("\t|Pulse 2 para entrar al creador de equipos\n");
	printf("\t|Pulse 3 para salir\n");
	printf("\t|Pulse 4 para saber cosas de los creadores\n");
	printf("\t-------------------------------------\n");
	scanf("%d", &seleccion);
		
		switch(seleccion){
			case 1:
				volver=0;
				
				printf("\tIntroduce tu nombre de entrenador:\n");
				scanf("%s", entrenador);
				printf("\tBienvenido al menu %s, aqui podras buscar informacion sobre el pokemon que quieras\n",entrenador);
				printf("\tAhora introduzca el nonmbre del pokemon que quieres ver\n"); //De aqui mandara al nombre de la pokedex a la que corresponde el pokemon, en el cual se mostrara toda la información
				scanf("%d", &npokedex);
			break;
			
			case 2:
				volver=0;
				printf("\t Bienvenido entrenador, has entrado en el creador de equipos, aqui podras seleccionar los pokemons que habra en tu equipo asi como los objetos que usaras en tus peleas\n");
				printf("\tAhora indica el nombre de tu primer pokemon\n");
				scanf("%s",&pokemons[i].pokemon1);
				printf("\tAhora indica el nombre de tu segundo pokemon\n");
				scanf("%s",&pokemons[i].pokemon2);
				printf("\tAhora indica el nombre de tu tercer pokemon\n");
				scanf("%s",&pokemons[i].pokemon3);
				printf("Por ultimo indica el numero de pociones de curacion que quieres emplear\n");
				scanf("%d", &pokemons[i].nPotis);
			
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
    printf("\t-----------\n");
	printf("\t|Bulbasaur|\n");
	printf("\t-----------\n");
    printf("\tGeneracion: 1\n");
	printf("\tTipo: Planta y Veneno \n");
	printf("\tDebilidad: Fuego, Psiquico, Volador y Hielo\n");
	printf("\tEvoluciones: Bulbasaur-Ivysaur-Venusaur\n");
		
	printf("\t---------\n");
	printf("\t|Ivysaur|\n");
	printf("\t---------\n");
	printf("\tGeneracion: 1\n");
	printf("\tTipo: Planta y Veneno \n");
	printf("\tDebilidad: Fuego, Psiquico, Volador y Hielo\n");
	printf("\tEvoluciones: Bulbasaur-Ivysaur-Venusaur\n");

	
    printf("\t----------\n");
	printf("\t|Venusaur|\n");
	printf("\t----------\n");
	printf("\tGeneracion: 1\n");
	printf("\tTipo: Planta y Veneno \n");
	printf("\tDebilidad: Fuego, Psiquico, Volador y Hielo\n");
	printf("\tEvoluciones: Bulbasaur-Ivysaur-Venusaur\n");
	
	printf("\t------------\n");
	printf("\t|Charmander|\n");
	printf("\t------------\n");
	printf("\tGeneracion: 1\n");
	printf("\tTipo: Fuego \n");
	printf("\tDebilidad: Agua, Tierra y Roca\n");
	printf("\tEvolucion: Charmander-Charmeleon-Charizard\n");
	
	printf("\t------------\n");
	printf("\t|Charmeleon|\n");
	printf("\t------------\n");
	printf("\tGeneracion: 1\n");
	printf("\tTipo: Fuego \n");
	printf("\tDebilidad: Agua, Tierra y Roca\n");
	printf("\tEvolucion: Charmander-Charmeleon-Charizard\n");
	
	printf("\t-----------\n");
	printf("\t|Charizard|\n");
	printf("\t-----------\n");
	printf("\tGeneracion: 1\n");
	printf("\tTipo: Fuego y Volador\n");
	printf("\tDebilidad: Agua, Tierra y Roca\n");
	printf("\tEvolucion: Charmander-Charmeleon-Charizard\n");
	
