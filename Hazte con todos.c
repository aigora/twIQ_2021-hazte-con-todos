#include <stdio.h>
#include <string.h>
#define N 10000

struct buscador{
	char nombre[30];
	int npokedex;
	int generacion;
	char tipo[100];
	char debilidad[100];
	char evoluciones[100];
	};
int main () {
	FILE*fentrada;
	char modoBusqueda;
	struct buscador poke[12] = { {"Bulbasaur",1,1,"Planta-Veneno","Fuego, Psiquico, Volador y Hielo","Bulbasaur-Ivysaur-Venusaur"},
								{"Ivysaur",2,1,"Planta-Veneno","Fuego, Psiquico, Volador y Hielo","Bulbasaur-Ivysaur-Venusaur"},
								{"Venusaur",3,1,"Planta-Veneno","Fuego, Psiquico, Volador y Hielo","Bulbasaur-Ivysaur-Venusaur"},
								{"Charmander",4,1,"Fuego","Agua, Tierra y Roca","Charmander-Charmeleon-Charizard"},
								{ "Charmeleon",5,1,"Fuego","Agua, Tierra y Roca","Charmander-Charmeleon-Charizard"},
								{"Charizard",6,1,"Fuego","Agua, Tierra y Roca","Charmander-Charmeleon-Charizard"},
								{"Squirtle",7,1,"Agua","Planta y Electrico","Squirtle-Wartortle-Blastoise"},
							    {"Wartortle",8,1,"Agua","Planta y Electrico","Squirtle-Wartortle-Blastoise"},
							    {"Blastoise",9,1,"Agua","Planta y Electrico","Squirtle-Wartortle-Blastoise"},
							    {"Caterpie",10,1,"Bicho","Fuego, Volador y Roca","Caterpie-Metapod-Butterfree"},
							    {"Metapod",11,1,"Bicho","Fuego, Volador y Roca","Caterpie-Metapod-Butterfree"},
							    {"Butterfree",12,1,"Bicho","Fuego, Volador y Roca","Caterpie-Metapod-Butterfree"} };
	int seleccion, volver, i, M, p;
	char entrenador[N], nombre[100];
	int nPokedex, m;

	printf("\t---------------------------------\n");
	printf("\t|*Bienvenido a'HAZTE CON TODOS'*|\n");
	printf("\t---------------------------------\n");

	do {
		printf("\t|Pulse 1 para entrar al menu de la Pokedex \n");
		printf("\t|Pulse 2 para saber informacion sobre objetos, gimnasios o personajes\n");
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
		
                printf("\t|Pulse 5 para saber cosas sobre objetos \n");
                printf("\t|Pulse 6 para saber cosas de los gimnasios\n");
                printf("\t|Pulse 7 para saber cosas de los personajes\n");
                printf("\t|Pulse 8 para volver al menu o salir del programa\n");
                printf("\t-------------------------------------\n");
                scanf("%d", &seleccion);
        
                switch(seleccion) {
                	case 5:
						volver = 0;

						int y = 0, w;
						char texto[N];
						
						fentrada = fopen("objetos.txt","r");	
						if(fentrada == NULL ){
							printf("No hay fichero\n");
							return 0;
						}
		
						while(fscanf(fentrada,"%c",&texto[y] ) != EOF){
							y++;
						}
						for (w = 0; w < y ; w++){
							printf("%c", texto[w]);
						}
						fclose(fentrada);
						return 0;
                	
              		case 6:
						volver = 0;
						
						int q = 0, a;
						char texto1[N];
						
						fentrada = fopen("gimnasios.txt","r");
						
						if(fentrada == NULL ){
							printf("No hay fichero\n");
							return 0;
						}
						
						while(fscanf(fentrada,"%c",&texto1[y] ) != EOF){
							y++;
						}
						for (a = 0; a < q; w++){
							printf("%c",texto1[a]);
						}
						fclose(fentrada);
						return 0;        

		           case 7:
						volver = 0;
						
						int t = 0, g;
						char texto2[N];
					
						
						fentrada = fopen("personajes.txt","r");
						
						if(fentrada == NULL ){
							printf("No hay fichero\n");
							return 0;
						}
	
						while(fscanf(fentrada,"%c",&texto2[t] ) != EOF){
							t++;
						}
						for (g = 0; g < t; g++){
							printf("%c",texto2[g]);
						}
						fclose(fentrada);
					return 0;
	
					case 8:
						volver = 0;
									
						printf("\tPulse 1 si desea volver a la pantalla de inicio o 2 si quiere salir\n");
						scanf("%d", &seleccion);
				
								switch(seleccion) {
									case 1:
										printf("\tHas elegido volver al menu\n");
										volver++;
										break;
									case 2:
										printf("\t!!!Hasta la proxima!!!");
										return 0;
								}
					break;
				}
			break;	
			case 3:
				printf("\t!!!Hasta la proxima!!!");
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
	
	switch(modoBusqueda){
		case ('N' || 'n'):
			printf("\tHa selecionado buscar por el numero de la pokedex\n");
			printf("\tIntroduce el numero del pokemon\n");
			scanf("%d", &nPokedex);
			break;
			
			
		case ('M' || 'm'):
			printf("\tHa selecionado buscar por el nombre del pokemon\n");
			while(1){		
				printf("\tIntroduce el nombre del pokemon\n");
				scanf("%s", &nombre);
		
				for(i = 0 ; i < 12; i++){
					if(nombre[i] == poke[i].nombre[i]){ 
			
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
			  	break; 
					
				break;
			}
	
	
	}

	
	


	return 0;
}
