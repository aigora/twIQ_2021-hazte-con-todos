#include <stdio.h>
#include <string.h>
#include <wchar.h>
#include <locale.h>
#include <conio.h>
#define N 10000

struct buscador{
	char nombre[30];
	int npokedex;
	int generacion;
	char tipo[100];
	char debilidad[100];
	char evoluciones[100];
};

char ListadoDePokemons(struct buscador Poke[]);

void imprimirPokeball();

int google(char nombre[], struct buscador poke[]);

int vuelta();


int main (){
	setlocale(LC_ALL, "");
	FILE*fentrada;
	FILE*fpokemons;
	char buscar, opcion1;
	struct buscador poke[300];
	int seleccion, volver, i, M, p;
	char entrenador[N], nombre[100];
	int nPokedex, m, regresar;
		
	
	system("color 56");
	printf("\t-----------------\n");
	printf("\t|HAZTE CON TODOS|\n");
	printf("\t-----------------\n");

	
	printf("\n\tPulsa enter\n\n");
    
	getch();
    
	system("cls");
	

	printf("\t---------------------------------\n");
	printf("\t|*Bienvenido a'HAZTE CON TODOS'*|\n");
	printf("\t---------------------------------\n");
	 system("color 75");
	

	do {
		 
		printf("\t|Pulse 1 para entrar al menu de la Pokedex \n");
		printf("\t|Pulse 2 para saber informacion sobre objetos, gimnasios o personajes\n");
		printf("\t|Pulse 3 para salir\n");
		printf("\t|Pulse 4 para saber cosas de los creadores\n");
		printf("\t|Pulse 5 para info del programa sobre como usarlo\n");
		printf("\t---------------------------------\n");
		scanf("%d", &seleccion);
		system("cls");

		switch(seleccion) {
			case 1:
				volver = 0;
				system("color 75");

				printf("\tIntroduce tu nombre de entrenador:\n");
				printf("\t----------------------------------\n");
				scanf("%s", entrenador);
				printf("\t|Bienvenido al menu %s, aqui podras buscar informacion sobre el pokemon que quieras\n",entrenador);
				printf("\t------------------------------------------------------------------------------------\n");
				
				do{
					ListadoDePokemons(poke);
					printf("\t|Escriba N para buscar al pokemon por su numero de pokedex o M para buscarlo por su nombre\n");
					printf("\t-------------------------------------------------------------------------------------------\n");
					scanf("%s", &buscar);
					system("cls");
					
					
					switch(buscar){
						case 'N':
						case 'n':
							
							regresar = 0;
							
							printf("\tIntroduce el numero del pokemon:\n");
							printf("\t--------------------------------\n");
							scanf("%d", &nPokedex);
							
							for(i = 0 ; i < 300 ; i++){
								if(nPokedex == poke[i].npokedex){
									
									printf("\n\t*Pokemon*\n");
									printf("\t-----------\n");
									printf("\t|%s|\n",poke[i].nombre);
									printf("\tGeneracion: %d\n",poke[i].generacion);
									printf("\tNumero de Pokedex: %d\n", poke[i].npokedex);
									printf("\tTipo: %s\n",poke[i].tipo);
									printf("\tDebilidad: %s\n",poke[i].debilidad);
									printf("\tEvoluciones: %s\n",poke[i].evoluciones);
									printf("\t---------------------------------------\n");
								}
							}
										
						break;
						case 'M':
						case 'm':
							do{	
								regresar = 0;	
								printf("\tIntroduce el nombre del pokemon:\n");
								printf("\t--------------------------------\n");
								scanf("%s", &nombre);
							
								m = (google(nombre, poke));
							
							}while(m == 1);
						
						break;
						
					}
						regresar = 0;
						printf("\t--------------------------------------- \n");
						printf("\t|¿Desean consultar algun otro pokemon?|\n");
						printf("\t|Escriba S o N                        |\n");
						printf("\t--------------------------------------- \n");
						scanf("%s", &opcion1);
						
						regresar = 0;
						switch(opcion1){
							case 'S':
							case 's':
								regresar++;
							break;
							case 'N':
							case 'n':
								printf("\t----------------------------------------------------------------\n");
								printf("\t|                    ¿Desea volver al menu?                    |\n");
							
							break;	
						}
					
				}while(regresar == 1);
				
				volver = vuelta();
				
			break;
			case 2:	
				volver = 0;
				system("color 75");
		
                printf("\t|Pulse 6 para saber cosas sobre objetos \n");
                printf("\t|Pulse 7 para saber cosas de los gimnasios\n");
                printf("\t|Pulse 8 para saber cosas de los personajes\n");
                printf("\t|Pulse 9 para volver al menu o salir del programa\n");
                printf("\t-------------------------------------------------\n");
                scanf("%d", &seleccion);
                system("cls");
        
                switch(seleccion) {
                	case 6:
						volver = 0;
						system("color 75");

						int y = 0, w;
						char texto[N];
						
						fentrada = fopen("txt/objetos.txt","r");	
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
						volver = vuelta();
                	break;
              		case 7:
              			printf("\t-----------------------------------------------------------------\n");
              			printf("\t|Pulse 1 para leer sobre los gimnasios de la primera generacion |  \n");
              			printf("\t|Pulse 2 para leer sobre los gimnasios de la segunda generacion |  \n");
              			printf("\t-----------------------------------------------------------------\n");
              			scanf("%d", &seleccion);
              			
              			switch(seleccion){
              				case 1:
              					system("cls");
              					volver = 0;
								system("color 75");
								
								char texto1[N];
								
								fentrada = fopen("txt/gimnasios.txt","r");
								
								if(fentrada == NULL ){
									printf("No hay fichero\n");
									return 0;
								}
								
								while(fscanf(fentrada,"%c",&texto1[y] ) != EOF){
									y++;
								}
								for (w = 0; w < y; w++){
									printf("%c",texto1[w]);
								}
								fclose(fentrada);
								volver = vuelta();
              				break;
              				
              				case 2:
              					system("cls");
              					volver = 0;
								system("color 75");
								
								char texto2[N];
								
								fentrada = fopen("txt/gimnasios2.txt","r");
								
								if(fentrada == NULL ){
									printf("No hay fichero\n");
									return 0;
								}
								
								while(fscanf(fentrada,"%c",&texto1[y] ) != EOF){
									y++;
								}
								for (w = 0; w < y; w++){
									printf("%c",texto1[w]);
								}
								fclose(fentrada);
              					volver = vuelta();
              				break;
						  }
				break;
		        case 8:
					volver = 0;
					system("color 75");
					
					int t = 0, g;
					char texto2[N];
				
					
					fentrada = fopen("txt/personajes.txt","r");
					
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
					volver = vuelta();
				break;
	
				case 9:
					volver = 0;
					system("color 75");
					volver = vuelta();
				break;
				}
			break;	
			case 3:
				printf("\t!!!Hasta la proxima!!!");
				printf("\n");
				imprimirPokeball();
				return 0;

			case 4:
				volver = 0;
				system("color A1");
				system("color B2");
				system("color C3");
				system("color D4");
				system("color E5");
				system("color F6");
				system("color 07");
				system("color 08");
				system("color 09");
				imprimirPokeball();
				
				printf("\t========================================\n");
				printf("\t|Los creadores de este proyecto somos: |\n");
				printf("\t------*Constantino Janeiro Catena*------\n");
				printf("\t-------*Adrian Langarica Esteban*-------\n");
				printf("\t------*Ruben Ernesto Godoy Salcedo*-----\n");
				printf("\t========================================\n");
				
				volver = vuelta();
				system("color 75");
			break;
			case 5:
				volver = 0;
				system("color 75");
				
				int t = 0, g;
				char texto2[N];
			
				
				fentrada = fopen("txt/info.txt","r");
				
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
				printf("\n");
				printf("\t---------------------------------------------------------------\n");
				volver = vuelta();
			break;
		}	
	} while(volver == 1);
	

	return 0;
}

char ListadoDePokemons(struct buscador Poke[]){
	int i; 
	FILE * fpokemons;
	
	fpokemons = fopen("txt/ListaDePokemons.txt", "r");
	if(fpokemons == NULL){
		printf("no existe el fichero\n");
		return 0;
	}
	i = 0;
	while(fscanf(fpokemons, "%s %d %d %s %s %s", Poke[i].nombre, &Poke[i].npokedex, &Poke[i].generacion, Poke[i].tipo, Poke[i].debilidad, Poke[i].evoluciones) != EOF){
		i++;
	}
	fclose(fpokemons);
}

void imprimirPokeball(){
 	printf("                            @@@@@@@@@@@@@@@@@                      \n");          
    printf("                      @@@@@@@@#############@@@@@@@@                \n");         
    printf("                   @@@@@#########################@@@@@             \n");          
    printf("                @@@@################################&@@@@          \n");           
    printf("              @@@@#####################################@@@@        \n");          
    printf("            @@@@#########################################@@@@      \n");          
    printf("           @@@############################################&@@@     \n");          
    printf("          @@@###############################################@@@    \n");        
    printf("         @@@###################&@@@@@@@@@###################@@@@   \n");          
    printf("         @@@#################@@@@       @@@@#################@@@   \n");         
    printf("         @@@@@@@@@@@@@@@@@@@@@@@   :)    @@@@@@@@@@@@@@@@@@@@@@@   \n");          
    printf("         @@@@@@@@@@@@@@@@@@@@@@@         @@@@@@@@@@@@@@@@@@@@@@@   \n");         
    printf("         @@@                 @@@@       @@@@                 @@@   \n");         
    printf("         @@@&                  &@@@@@@@@@#                  @@@@   \n");         
    printf("          @@@                                               @@@    \n");         
    printf("           @@@*                                           #@@@     \n");         
    printf("            @@@@                                         @@@@      \n");         
    printf("              @@@@                                     @@@@        \n");         
    printf("                @@@@#                               @@@@@          \n");         
    printf("                   @@@@@                         @@@@@             \n");         
    printf("                      @@@@@@@@,           *@@@@@@@&                \n");         
    printf("                            @@@@@@@@@@@@@@@@@                      \n");    
}

int google(char nombre[], struct buscador poke[]){
	int i, m; 
	m = 1;
	for(i = 0 ; i < 300 ; i++){
		if(strcmp(nombre, poke[i].nombre) == 0){ 
			m = 0; 
			printf("\n\t*Pokemon*\n");
			printf("\t-----------\n");
			printf("\t|%s|\n",poke[i].nombre);
			printf("\tGeneracion: %d\n",poke[i].generacion);
			printf("\tNumero de Pokedex: %d\n", poke[i].npokedex);
			printf("\tTipo: %s\n",poke[i].tipo);
			printf("\tDebilidad: %s\n",poke[i].debilidad);
			printf("\tEvoluciones: %s\n",poke[i].evoluciones);
			printf("\t---------------------------------------\n");		
		}
	}
	return m;
}

int vuelta(){
 	int volver,seleccion;
 	
 	printf("\t|Pulse 1 si desea volver al menu principal o 2 si quiere salir|\n");
	printf("\t---------------------------------------------------------------\n");
	scanf("%d", &seleccion);
	
	volver = 0;
	switch(seleccion) {
		case 1:
			volver++;
			system("cls");
			printf("\tHas elegido volver al menú\n");
			printf("\t---------------------------\n");
		    printf("\n");
			
		break;
		case 2:
			printf("\t!!!Hasta la proxima!!");
			
	}
	return volver;
}


