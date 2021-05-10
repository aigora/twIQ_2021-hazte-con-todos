#include <stdio.h>
#include <string.h>
#define N 10000


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
	char buscar, opcion1;
	struct buscador poke[62] = { {"Bulbasaur",1,1,"Planta-Veneno","Fuego, Psiquico, Volador y Hielo","Bulbasaur-Ivysaur-Venusaur"},
								{"Ivysaur",2,1,"Planta-Veneno","Fuego, Psiquico, Volador y Hielo","Bulbasaur-Ivysaur-Venusaur"},
								{"Venusaur",3,1,"Planta-Veneno","Fuego, Psiquico, Volador y Hielo","Bulbasaur-Ivysaur-Venusaur"},
								{"Charmander",4,1,"Fuego","Agua, Tierra y Roca","Charmander-Charmeleon-Charizard"},
								{"Charmeleon",5,1,"Fuego","Agua, Tierra y Roca","Charmander-Charmeleon-Charizard"},
								{"Charizard",6,1,"Fuego","Agua, Tierra y Roca","Charmander-Charmeleon-Charizard"},
								{"Squirtle",7,1,"Agua","Planta y Electrico","Squirtle-Wartortle-Blastoise"},
							    {"Wartortle",8,1,"Agua","Planta y Electrico","Squirtle-Wartortle-Blastoise"},
							    {"Blastoise",9,1,"Agua","Planta y Electrico","Squirtle-Wartortle-Blastoise"},
							    {"Caterpie",10,1,"Bicho","Fuego, Volador y Roca","Caterpie-Metapod-Butterfree"},
							    {"Metapod",11,1,"Bicho","Fuego, Volador y Roca","Caterpie-Metapod-Butterfree"},
							    {"Butterfree",12,1,"Bicho","Fuego, Volador y Roca","Caterpie-Metapod-Butterfree"},
								{"Weedle",13,1,"Bicho y Veneno","Fuego, Psiquico, Volador y Roca","Weedle-Kakuna-Beedrill"},
								{"Kakuna",14,1,"Bichoy Veneno","Fuego, Psiquico, Volador y Roca","Weedle-Kakuna-Beedrill"},
								{"Beedrill",15,1,"Bichoy Veneno","Fuego, Volador y Roca","Weedle-Kakuna-Beedrill"},
								{"Pidgey",16,1,"Normal y Volador","Eléctrico, Hielo y Roca","Pidgey-Pidgeotto-Pidgeot"},
								{"Pidgeotto",17,1,"Normal y Volador","Eléctrico, Hielo y Roca","Pidgey-Pidgeotto-Pidgeot"},
								{"Pidgeot",18,1,"Normal y Volador","Eléctrico, Hielo y Roca","Pidgey-Pidgeotto-Pidgeot"},
								{"Rattata",19,1,"Normal","Lucha","Rattata-Raticate"},
								{"Raticate",20,1,"Normal","Lucha","Rattata-Raticate"},
								{"Spearow",21,1,"Normal y Volador","Eléctrico, Hielo y Roca","Spearow-Fearow"},
								{"Fearow",22,1,"Normal y Volador","Eléctrico, Hielo y Roca","Spearow-Fearow"},
								{"Ekans",23,1,"Veneno","Psiquico y Tierra","Ekans-Arbok"},
								{"Arbok",24,1,"Veneno","Psiquico y Tierra","Ekans-Arbok"},
								{"Pikachu",25,1,"Eléctrico","Tierra","Pichu-Pikachu-Raichu"},
								{"Raichu",26,1,"Eléctrico","Tierra","Pichu-Pikachu-Raichu"},
								{"Sandshrew",27,1,"Tierra","Agua, Planta y Hielo","Sandshrew-Sandslash"},
								{"Sandslash",28,1,"Tierra","Agua, Planta y Hielo","Sandshrew-Sandslash"},
								{"Nidoran-hembra",29,1,"Veneno","Psiquico y Tierra","Nidoran-Nidorina-Nidoqueen"},
								{"Nidorina",30,1,"Veneno","Psiquico y Tierra","Nidoran-Nidorina-Nidoqueen"},
								{"Nidoqueen",31,1,"Veneno","Agua, Psiquico, Hielo y Tierra","Nidoran-Nidorina-Nidoqueen"},
								{"Nidoran-macho",32,1,"Veneno","Psiquico y Tierra","Nidoran-Nidorino-Nidoking"},
								{"Nidorino",33,1,"Veneno","Psiquico y Tierra","Nidoran-Nidorino-Nidoking"},
								{"Nidoking",34,1,"Veneno","Agua, Psiquico, Hielo y Tierra","Nidoran-Nidorino-Nidoking"},
								{"Clefairy",35,1,"Hada","Acero y Veneno","Cleffa-Clefairy-Clefable"},
								{"Clefable",36,1,"Hada","Acero y Veneno","Cleffa-Clefairy-Clefable"},
								{"Vulpix",37,1,"Fuego","Agua, Tierra y Roca","Vulpix-Ninetales"},
								{"Ninetales",38,1,"Fuego","Agua, Tierra y Roca","Vulpix-Ninetales"},
								{"Jigglypuff",39,1,"Normal y Hada","Acero y Veneno","Igglypuff-Jigglypuff-Wigglytuff"},
								{"Wigglytuff",40,1,"Normal y Hada","Acero y Veneno","Igglypuff-Jigglypuff-Wigglytuff"},
								{"Zubat",41,1,"Veneno y Volador","Psiquico, Eléctrico, Hielo y Roca","Zubat-Golbat-Crobat"},
								{"Golbat",42,1,"Veneno y Volador","Psiquico, Eléctrico, Hielo y Roca","Zubat-Golbat-Crobat"},
								{"Oddish",43,1,"Planta y Veneno","Fuego, Volador, Hielo y Psiquico","Oddish-Gloom-Villeplum"},
								{"Gloom",44,1,"Planta y Veneno","Fuego, Volador, Hielo y Psiquico","Oddish-Gloom-Villeplum"},
								{"Villeplum",45,1,"Planta y Veneno","Fuego, Volador, Hielo y Psiquico","Oddish-Gloom-Villeplum"},
								{"Paras",46,1,"Bicho y Planta","Fuego, Volador, Hielo, Veneno, Bicho y Roca","Paras-Parasect"},
								{"Parasect",47,1,"Bicho y Planta","Fuego, Volador, Hielo, Veneno, Bicho y Roca","Paras-Parasect"},
								{"Venonat",48,1,"Bicho y Veneno","Fuego, Psiquico, Volador y Roca","Venonat-Venomoth"},
								{"Venomoth",49,1,"Bichoy Veneno","Fuego, Psiquico, Volador y Roca","Venonat-Venomoth"},
								{"Diglett",50,1,"Tierra","Agua, Planta y Hielo","Diglett-Dugtrio"},
								{"Dugtrio",51,1,"Tierra","Agua, Planta y Hielo","Diglett-Dugtrio"},
								{"Meowth",52,1,"Normal","Lucha","Meowth-Persian"},
								{"Persian",53,1,"Normal","Lucha","Meowth-Persian"},
								{"Psyduck",54,1,"Agua","Planta y Eléctrico","Psyduck-Golduck"},
								{"Golduck",55,1,"Agua","Planta y Eléctrico","Psyduck-Golduck"},
								{"Monke",56,1,"Lucha","Psiquico, Volador y Hada","Mankey-Primeape"},
								{"Primeape",57,1,"Lucha","Psiquico, Volador y Hada","Mankey-Primeape"},
								{"Growlithe",58,1,"Fuego","Agua, Tierra y Roca","Growlithe-Arcanine"},
								{"Arcanine",59,1,"Fuego","Agua, Tierra y Roca","Growlithe-Arcanine"},
								{"Poliwag",60,1,"Agua","Planta y Eléctrico","Poliwag-Poliwhirl-Poliwrath"},
								{"Poliwhirl",61,1,"Agua","Planta y Eléctrico","Poliwag-Poliwhirl-Poliwrath"},
								{"Poliwrath",62,1,"Agua y Lucha","Planta, Eléctrico, Volador, Hada y Psiquico ","Poliwag-Poliwhirl-Poliwrath"} };
	int seleccion, volver, i, M, p;
	char entrenador[N], nombre[100];
	int nPokedex, m, regresar;
	
	
	
	system("color 06");
	printf("\t-----------------\n");
	printf("\t|HAZTE CON TODOS|\n");
	printf("\t-----------------\n");



	
	printf("\n\tIntroduce cualquier tecla\n\n");
    scanf("%s");
    system("cls");
	

	printf("\t---------------------------------\n");
	printf("\t|*Bienvenido a'HAZTE CON TODOS'*|\n");
	printf("\t---------------------------------\n");
	 system("color 04");
	

	do {
		 

		printf("\n\t|Pulse 1 para entrar al menu de la Pokedex \n");
		printf("\t|Pulse 2 para saber informacion sobre objetos, gimnasios o personajes\n");
		printf("\t|Pulse 3 para salir\n");
		printf("\t|Pulse 4 para saber cosas de los creadores\n");
		printf("\t-------------------------------------\n");
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

				break;

			case 2:	
				volver = 0;
				system("color AF");
		
                printf("\t|Pulse 5 para saber cosas sobre objetos \n");
                printf("\t|Pulse 6 para saber cosas de los gimnasios\n");
                printf("\t|Pulse 7 para saber cosas de los personajes\n");
                printf("\t|Pulse 8 para volver al menu o salir del programa\n");
                printf("\t-------------------------------------\n");
                scanf("%d", &seleccion);
                system("cls");
        
                switch(seleccion) {
                	case 5:
						volver = 0;
						system("color 46");

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
						system("color 0B");
						
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
						system("color 04");
						
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
						system("color FC");
									
						printf("\tPulse 1 si desea volver al menu principal o 2 si quiere salir\n");
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
	
	do{
		printf("\t|Escriba N para buscar al pokemon por su numero de pokedex o M para buscarlo por su nombre\n");
		printf("\t-------------------------------------------------------------------------------------------\n");
		scanf("%s", &buscar);
		system("cls");
		
		if(buscar == ('N'))
			p = 1;
		else if(buscar == 'M')
			p = 2;
		
		switch(p){
			case 1:
				
				regresar = 0;
				
				printf("\tIntroduce el numero del pokemon:\n");
				printf("\t--------------------------------\n");
				scanf("%d", &nPokedex);
				
				for(i = 0 ; i < 62 ; i++){
					if(nPokedex == poke[i].npokedex){
						
						printf("\t*Pokemon*\n");
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
				printf("\t¿Desean consultar algun otro pokemon?\n");
				printf("\tEscriba S o N");
				scanf("%c", &opcion1);
				
				switch(opcion1){
					case 'S':
						regresar++;
					break;
					case 'N':
						printf("\tHasta la proximaaa!!!!!\n");
					return 0;	
				}
				
				break;
			
			case 2:
				regresar = 0;	
				printf("\tIntroduce el nombre del pokemon:\n");
				printf("\t--------------------------------\n");
				scanf("%s", &nombre);
			do{
				m = 0;
				for(i = 0 ; i < 62 ; i++){
					if(strcmp(nombre, poke[i].nombre) == 0){ 
						
						printf("\t*Pokemon*\n");
						printf("\t-----------\n");
						printf("\t|%s|\n",poke[i].nombre);
						printf("\tGeneracion: %d\n",poke[i].generacion);
						printf("\tNumero de Pokedex: %d\n", poke[i].npokedex);
						printf("\tTipo: %s\n",poke[i].tipo);
						printf("\tDebilidad: %s\n",poke[i].debilidad);
						printf("\tEvoluciones: %s\n",poke[i].evoluciones);
						printf("\t---------------------------------------\n");
						
						m++;	
					}	
				}
			}while(m == 0);
			
			printf("\t¿Desean consultar algun otro pokemon?\n");
				printf("\tEscriba S o N");
				scanf("%s", opcion1);
				
				switch(opcion1){
					case 'S':
						regresar++;
					break;
					case 'N':
						printf("\tHasta la proximaaa!!!!!\n");
					return 0;	
				}
			
			break;	
		}
	}while(regresar == 1);

	return 0;
}

