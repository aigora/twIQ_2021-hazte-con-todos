#include <stdio.h>
#include <string.h>
#define N 100

struct buscador{
	char nombre[30];
	int npokedex;
	int generacion;
	char tipo[100];
	char debilidad[100];
	char evoluciones[100];
	};
struct equipo {
	char pokemon[N];

};
int main () {
	FILE*fichero;
	char modoBusqueda;
	struct buscador poke[6] = { {"Bulbasaur",1,1,"Planta-Veneno","Fuego, Psiquico, Volador y Hielo","Bulbasaur-Ivysaur-Venusaur"},
								{"Ivysaur",2,1,"Planta-Veneno","Fuego, Psiquico, Volador y Hielo","Bulbasaur-Ivysaur-Venusaur"},
								{"Venusaur",3,1,"Planta-Veneno","Fuego, Psiquico, Volador y Hielo","Bulbasaur-Ivysaur-Venusaur"},
								{"Charmander",4,1,"Fuego","Agua, Tierra y Roca","Charmander-Charmeleon-Charizard"},
								{ "Charmeleon",5,1,"Fuego","Agua, Tierra y Roca","Charmander-Charmeleon-Charizard"},
								{"Charizard",6,1,"Fuego","Agua, Tierra y Roca","Charmander-Charmeleon-Charizard"}};
	struct equipo pokemons[3];
	int seleccion,volver,i,M,p;
	char entrenador[N],nombre[100];
	int nPokedex,m;

	/*fichero = fopen("Hazte con todos.txt","r")
	if(fichero == NULL){
		printf("No existe el archivo");
		return 0;
	}
	i = 0;
	while(fscanf(fichero, "%s %f",pokemons[i].pokemon) != EOF){
		i++;
	}*/




	printf("\t---------------------------------\n");
	printf("\t|*Bienvenido a'HAZTE CON TODOS'*|\n");
	printf("\t---------------------------------\n");

	do {
		printf("\t|Pulse 1 para entrar al menu de la Pokedex \n");
		printf("\t|Pulse 2 para entrar al creador de equipos\n");
		printf("\t|Pulse 3 para salir\n");
		printf("\t|Pulse 4 para saber cosas de los creadores\n");
		printf("\t-------------------------------------\n");
		scanf("%d", &seleccion);

		switch(seleccion) {
			case 1:
				volver = 0;

				printf("\tIntroduce tu nombre de entrenador:\n");
				scanf("%s", entrenador);
				printf("\tBienvenido al menu %s, aqui podras buscar informacion sobre el pokemon que quieras\n",entrenador);

				break;

			case 2:
				volver = 0;
				printf("\t Bienvenido entrenador, has entrado en el creador de equipos, aqui podras seleccionar los pokemons que habra en tu equipo asi como los objetos que usaras en tus peleas\n");
				//fentrada=fopen("Equipo.txt", "w");
				printf("\tEscribe el numero de pokemons que habra en el equipo\n");
				scanf("%d", &M);
				for(i = 0 ; i < M ; i++){
					printf("\tEscribe el nombre del pokemon %d\n", i+1);
					scanf("%s", &pokemons[i].pokemon);
				}
				return 0;

			case 3:
				printf("\t!!!Hasta la proxima!!!\n");
				return 0;

			case 4:
				volver = 0;
				
				printf("\t========================================\n");
				printf("\t|Los creadores de este proyecto somos: |\n");
				printf("\t------*Constantino Janeiro Catena*------\n");
				printf("\t-------*Adrian Langarica Esteban*-------\n");
				printf("\t------*Ruben Ernesto Godoy Salcedo*------\n");
				printf("\t========================================\n");
				printf("\tPulse 1 si desea volver a la pantalla de inicio o 2 si quiere salir\n");
				scanf("%d", &seleccion);

				switch(seleccion) {
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
	} while(volver == 1);
	
	
	printf("\tIndica como quiere buscar el pokemon, si desea buscarlo por el numero de la pokedex escriba N, si lo prefiere por nombre escriba M\n");
	scanf("%s", &modoBusqueda);
	
	if(modoBusqueda == 'N'|| modoBusqueda == 'n'){
		p=1;}
	else{
		p=2;}
	
	switch(p){
		case 1:
			printf("\tHa selecionado buscar por el numero de la pokedex\n");
			printf("\tIntroduce el numero del pokemon\n");
			scanf("%d", &nPokedex);
			break;
			
			
		case 2:
			printf("\tHa selecionado buscar por el nombre del pokemon\n");
			printf("\tIntroduce el nombre del pokemon\n");
			scanf("%d", &nombre);
				
			break;
	}
	
	while(1)
	{	
		printf("\tEscriba el nombre del pokemon\n");
		scanf("%s",nombre);
		for(i = 0 ; i < 6; i++){
			if(nombre[0] == poke[i].nombre[0]){ 
	
				printf("\t*Pokemon*\n");
				printf("\t-----------\n");
				printf("\t|%s|\n",poke[i].nombre);
				printf("\tGeneracion: %d\n",poke[i].generacion);
				printf("\tNumero de Pokedex: %d\n", poke[i].npokedex);
				printf("\tTipo: %s\n",poke[i].tipo);
				printf("\tDebilidad: %s\n",poke[i].debilidad);
				printf("\tEvoluciones: %s\n",poke[i].evoluciones);
				
				m++;
			}
		}
		
		if(m == 0)
			printf("Pokemon no encontrado\n");
	}

	
	


	return 0;
}


