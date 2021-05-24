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

void google(char nombre[], struct buscador poke[]){
	int i, m = 0; 
	do{
	for(i = 0 ; i < 253 ; i++){
		if(strcmp(nombre, poke[i].nombre) == 0){ 
			
			printf("\n\t*Pokemon*\n");
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

int vuelta(int seleccion){
 	int volver;
 	
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




int main () {
	setlocale(LC_ALL, "");
	FILE*fentrada;
	char buscar, opcion1;
	struct buscador poke[253] = { {"Bulbasaur",1,1,"Planta-Veneno","Fuego, Psiquico, Volador y Hielo","Bulbasaur-Ivysaur-Venusaur"},
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
								{"Kakuna",14,1,"Bicho y Veneno","Fuego, Psiquico, Volador y Roca","Weedle-Kakuna-Beedrill"},
								{"Beedrill",15,1,"Bicho y Veneno","Fuego, Volador y Roca","Weedle-Kakuna-Beedrill"},
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
								{"Oddish",43,1,"Planta y Veneno","Fuego, Volador, Hielo y Psiquico","Oddish-Gloom-Villeplum/Bellosom"},
								{"Gloom",44,1,"Planta y Veneno","Fuego, Volador, Hielo y Psiquico","Oddish-Gloom-Villeplum/Bellosom"},
								{"Villeplum",45,1,"Planta y Veneno","Fuego, Volador, Hielo y Psiquico","Oddish-Gloom-Villeplum"},
								{"Paras",46,1,"Bicho y Planta","Fuego, Volador, Hielo, Veneno, Bicho y Roca","Paras-Parasect"},
								{"Parasect",47,1,"Bicho y Planta","Fuego, Volador, Hielo, Veneno, Bicho y Roca","Paras-Parasect"},
								{"Venonat",48,1,"Bicho y Veneno","Fuego, Psiquico, Volador y Roca","Venonat-Venomoth"},
								{"Venomoth",49,1,"Bicho y Veneno","Fuego, Psiquico, Volador y Roca","Venonat-Venomoth"},
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
								{"Poliwag",60,1,"Agua","Planta y Eléctrico","Poliwag-Poliwhirl-Poliwrath/Politoed"},
								{"Poliwhirl",61,1,"Agua","Planta y Eléctrico","Poliwag-Poliwhirl-Poliwrath/Politoed"},
								{"Poliwrath",62,1,"Agua y Lucha","Planta, Eléctrico, Volador, Hada y Psiquico ","Poliwag-Poliwhirl-Poliwrath"},
								{"Abra",63,1,"Psiquico","Siniestro, Bicho, Fantasma","Abra-Kadabra-Alakazam"},
								{"Kadabra",64,1,"Psiquico","Siniestro, Bicho, Fantasma","Abra-Kadabra-Alakazam"},
								{"Alakazam",65,1,"Psiquico","Siniestro, Bicho, Fantasma","Abra-Kadabra-Alakazam"},
								{"Machop",66,1,"Lucha","Psiquico, Volador y Hada","Machop-Machoke-Machamp"},
								{"Machoke",67,1,"Lucha","Psiquico, Volador y Hada","Machop-Machoke-Machamp"},
								{"Machamp",68,1,"Lucha","Psiquico, Volador y Hada","Machop-Machoke-Machamp"},
								{"Bellsprout",69,1,"Nice","Fuego, Volador, Hielo y Psiquico","Bellsprout-Weepinbell-Victreebel"},
								{"Weepinbell",70,1,"Planta y Veneno","Fuego, Volador, Hielo y Psiquico","Bellsprout-Weepinbell-Victreebel"},								
								{"Victreebel",71,1,"Planta y Veneno","Fuego, Volador, Hielo y Psiquico","Bellsprout-Weepinbell-Victreebel"},
								{"Tentacool",72,1,"Agua y Veneno","Psiquico, Tierra  y Eléctrico","Tentacool-Tentacruel"},
								{"Tentacruel",73,1,"Agua y Veneno","Psiquico, Tierra  y Eléctrico","Tentacool-Tentacruel"},
								{"Geodude",74,1,"Roca y Tierra","Acero, Lucha, Agua, Hielo, Planta y Tierra","Geodude-Graveler-Golem"},
								{"Geodude",75,1,"Roca y Tierra","Acero, Lucha, Agua, Hielo, Planta y Tierra","Geodude-Graveler-Golem"},
								{"Golem",76,1,"Roca y Tierra","Acero, Lucha, Agua, Hielo, Planta y Tierra","Geodude-Graveler-Golem"},
								{"Ponyta",77,1,"Fuego","Agua, Tierra y Roca","Ponyta-Rapidash"},
								{"Rapidash",78,1,"Fuego","Agua, Tierra y Roca","Ponyta-Rapidash"},
								{"Slowpoke",79,1,"Agua y Psiquico","Planta, Fantasma, Siniestro, Bicho y Eléctrico","Slowpoke-Slowbro"},
								{"Slowbro",80,1,"Agua y Psiquico","Planta, Fantasma, Siniestro, Bicho y Eléctrico","Slowpoke-Slowbro"},
								{"Magnemite",81,1,"Eléctrico y Acero ","Tierra, Lucha y Fuego","Magnemite-Magneton"},
								{"Magneton",82,1,"Eléctrico y Acero","Tierra, Lucha y Fuego","Magnemite-Magneton"},
								{"Farfetch´d",83,1,"Normal y Volador","Eléctrico, Hielo y Roca","Farfetch´d"},								
								{"Doduo",84,1,"Normal y Volador","Eléctrico, Hielo y Roca","Doduo-Dodrio"},								
								{"Dodrio",85,1,"Normal y Volador","Eléctrico, Hielo y Roca","Doduo-Dodrio"},								
								{"Seel",86,1,"Agua","Planta y Eléctrico","Seel-Dewgong"},								
								{"Dewgong",87,1,"Agua y Hielo","Lucha, Roca, Planta y Eléctrico","Poliwag-Poliwhirl"},
								{"Grimmer",88,1,"Veneno","Tierra y Psiquico","Grimmer-Muk-Cum"},								
								{"Muk",89,1,"Veneno","Tierra y Psiquico","Grimmer-Muk-Cum"},
								{"Shellder",90,1,"Agua","Planta y Eléctrico","Seel-Dewgong"},								
								{"Cloyster",91,1,"Agua y Hielo","Lucha, Roca, Planta y Eléctrico","Seel-Dewgong"},
								{"Gastly",92,1,"Fantasma y Veneno","Fantasma, Psiquico, Siniestro y Tierra","Gastly-Haunter-Gengar"},								
								{"Haunter",93,1,"Fantasma y Veneno","Fantasma, Psiquico, Siniestro y Tierra","Gastly-Haunter-Gengar"},								
								{"Gengar",94,1,"Fantasma y Veneno","Fantasma, Psiquico, Siniestro y Tierra","Gastly-Haunter-Gengar"},
								{"Onix",95,1,"Roca y Tierra","Acero, Lucha, Agua, Hielo, Planta y Tierra","Onix-Steelix"},
								{"Drowzee",96,1,"Psiquico","Siniestro, Bicho, Fantasma","Drowzee-Hypno"},								
								{"Hypno",97,1,"Psiquico","Siniestro, Bicho, Fantasma","Drowzee-Hypno"},
								{"Krabby",98,1,"Agua","Planta y Eléctrico","Krabby-Kingler"},								
								{"Kingler",99,1,"Agua","Planta y Eléctrico","Krabby-Kingler"},
								{"Voltorb",100,1,"Eléctrico","Tierra","Voltorb-Electrode"},								
								{"Electrode",101,1,"Eléctrico","Tierra","Voltorb-Electrode"},
								{"Exeggcute",102,1,"Planta y Psiquico","Fuego, Fantasma, Volador, Hielo, Siniestro, Veneno y Bicho","Exeggcute-Exeggutor"},								
								{"Exeggutor",103,1,"Planta y Psiquico","Fuego, Fantasma, Volador, Hielo, Siniestro, Veneno y Bicho","Exeggcute-Exeggutor"},
								{"Cubone",104,1,"Tierra","Agua, Planta y Hielo","Cubone-Marowak"},								
								{"Marowak",105,1,"Tierra","Agua, Planta y Hielo","Cubone-Marowak"},								
								{"Hitmonlee",106,1,"Lucha","Psiquico, Volador y Hada", "Tyrogue-Hitmonlee"},
								{"Hitmonchan",107,1,"Lucha","Psiquico, Volador y Hada", "Tyrogue-Hitmonchan"},
								{"Lickitung",108,1,"Normal","Lucha","Lickitung"},								
								{"Koffing",109,1,"Veneno","Psiquico y Tierra","Koffing-Weezing"},
								{"Weezing",110,1,"Veneno","Psiquico y Tierra","Koffing-Weezing"},								
								{"Rhyhorn",111,1,"Tierra y Roca","Acero, Lucha, Tierra, Agua, Planta y Hielo","Rhyhorn-Rhydon"},
								{"Rhydon",112,1,"Tierra y Roca","Acero, Lucha, Tierra, Agua, Planta y Hielo","Rhyhorn-Rhydon"},								
								{"Chansey",113,1,"Normal","Lucha","Chansey-Blissey"},								
								{"Tangela",114,1,"Planta y Psiquico","Fuego, Volador, Hielo, Veneno y Bicho","Tangela"},							
								{"Kangaskhan",115,1,"Normal","Lucha","Kangaskhan"},								
								{"Horsea",116,1,"Agua","Planta y Eléctrico","Horsea-Seadra-Kingdra"},
								{"Seadra",117,1,"Agua","Planta y Eléctrico","Horsea-Seadra-Kingdra"},								
								{"Goldeen",118,1,"Agua","Planta y Eléctrico","Goldeen-Seaking"},
								{"Seaking",119,1,"Agua","Planta y Eléctrico","Goldeen-Seaking"},								
								{"Staryu",120,1,"Agua","Planta y Eléctrico","Staryu-Starmie"},
								{"Starmie",121,1,"Agua","Planta y Eléctrico","Staryu-Starmie"},								
								{"Mr. Mime",122,1,"Psiquico y Hada","Fantasma, Acero y Veneo","Mr. Mime"},								
								{"Scyther",123,1,"Bicho y Volador","Fuego, Volador, Eléctrico, Hielo, Roca","Scyther-Scizor"},								
								{"Jynx",124,1,"Hielo y Psiquico","Acero, Fantasma, Fuego, Siniestro, Roca y Bicho","Smoochum-Jynx"},								
								{"Electabuzz",125,1,"Eléctrico","Tierra","Elekid-Electabuzz"},								
								{"Magmar",126,1,"Fuego","Agua, Tierra y Roca","Magby-Magmar"},								
								{"Pinsir",127,1,"Bicho","Fuego, Volador y Roca","Pinsir"},								
								{"Tauros",128,1,"Normal","Lucha","Tauros"},								
								{"Magikarp",129,1,"Agua","Planta y Eléctrico","Magikarp-Gyarados"},
								{"Gyarados",130,1,"Agua y Volador","Roca y Eléctrico","Magikarp-Gyarados"},								
								{"Lapras",131,1,"Agua y Hielo","Planta, Lucha, Roca y Eléctrico","Lapras"},								
								{"Ditto",132,1,"Normal","Lucha","Ditto"},								
								{"Eevee",133,1,"Normal","Lucha","Eevee-Vaporeon/Jolteon/Flareon/Espeon/Umbreon"},
								{"Vaporeon",134,1,"Agua","Planta y Elétrico","Eevee-Vaporeon"},
								{"Jolteon",135,1,"Eléctrico","Tierra","Eevee-Jolteon"},
								{"Flareon",136,1,"Fuego","Agua, Tierra y Roca","Eevee-Flareon"},								
								{"Porygon",137,1,"Normal","Lucha","Porygon"},								
								{"Omanyte",138,1,"Agua y Roca","Planta, Lucha, Tierra y Eléctrico","Omanyte"},
								{"Omastar",139,1,"Agua y Roca","Planta, Lucha, Tierra y Eléctrico","Omastar"},
								{"Kabuto",140,1,"Agua y Roca","Planta, Lucha, Tierra y Eléctrico","Kabuto-Kabutops"},
								{"Kabutops",141,1,"Agua y Roca","Planta, Lucha, Tierra y Eléctrico","Kabuto-Kabutops"},							
								{"Aerodactyl",142,1,"Volador y Roca","Acero, Agua, Eléctrico, Hielo y Roca","Aerodactyl"},																
								{"Snorlax",143,1,"Normal","Lucha","Snorlax"},								
								{"Articuno",144,1,"Hielo y Volador","Acero, Fuego, Eléctrico y Roca","Articuno"},								
								{"Zapdos",145,1,"Eléctrico y Volador","Hielo y Roca","Zapdos"},								
								{"Moltres",146,1,"Fuego y Volador","Agua, Eléctrico y Roca","Moltres"},								
								{"Dratini",147,1,"Dragon","Hada, Hielo y Dragon","Dratini-Dragonair-Dragonite"},
								{"Dragonair",148,1,"Dragon","Hada, Hielo y Dragon","Dratini-Dragonair-Dragonite"},
								{"Dragonite",149,1,"Dragon y Volador","Hada, Roca, Hielo y Dragon","Dratini-Dragonair-Dragonite"},
								{"Mewtwo",150,1,"Psiquico","Fantasma, Siniestro y Bicho","Mewtwo"},
								{"Mew",151,1,"Psiquico","Fantasma, Siniestro y Bicho","Mew"},								
								{"Chikorita",152,2,"Planta","Fuego, Veneno, Bicho, Volador y Hielo","Chikorita-Bayleff-Meganium"},
								{"Bayleff",153,2,"Planta","Fuego, Veneno, Bicho, Volador y Hielo","Chikorita-Bayleff-Meganium"},
								{"Meganium",154,2,"Planta","Fuego, Veneno, Bicho, Volador y Hielo","Chikorita-Bayleff-Meganium"},								
								{"Cyndaquil",155,2,"Fuego","Agua, Tierra y Roca","Cyndaquil-Quilava-Thyplosion"},
								{"Quilava",156,1,"Fuego","Agua, Tierra y Roca","Cyndaquil-Quilava-Thyplosion"},
								{"Thyplosion",157,2,"Fuego","Agua, Tierra y Roca","Cyndaquil-Quilava-Thyplosion"},								
								{"Totodile",158,2,"Agua","Planta y Eléctrico","Totodile-Croconaw-Feraligart"},
								{"Croconaw",159,2,"Agua","Planta y Eléctrico","Totodile-Croconaw-Feraligart"},
								{"Feraligart",160,2,"Agua","Planta y Eléctrico","Totodile-Croconaw-Feraligart"},								
								{"Sentret",161,2,"Normal","Lucha","Sentret-Furret"},
								{"Furret",162,2,"Normal","Lucha","Sentret-Furret"},							
								{"Hoothoot",163,2,"Normal y Volador","Eléctrico, Hielo y Roca","Hoothoot-Noctowl"},
								{"Noctowl",164,2,"Normal y Volador","Eléctrico, Hielo y Roca","Hoothoot-Noctowl"},								
								{"Ledyba",165,2,"Bicho y Volador","Eléctrico, Hielo y Roca","Ledyba-Ledian"},
								{"Ledian",166,2,"Bicho y Volador","Eléctrico, Hielo y Roca","Ledyba-Ledian"},								
								{"Spinarak",167,2,"Bicho y Veneno","Fuego, Psiquico, Volador y Roca","Spinarak-Ariados"},
								{"Ariados",168,2,"Bicho y Veneno","Fuego, Psiquico, Volador y Roca","Spinarak-Ariados"},								
								{"Crobat",169,2,"Veneno y Volador","Psiquico, Eléctrico, Hielo y Roca","Zubat-Golbat-Crobat"},							
								{"Chinchou",170,2,"Agua y Eléctrico","Planta y Tierra","Chinchou-Lanturn"},								
								{"Lanturn",171,2,"Agua y Eléctrico","Planta y Tierra","Chinchou-Lanturn"},								
								{"Pichu",172,2,"Eléctrico","Tierra","Pichu-Pikachu-Raichu"},								
								{"Cleffa",173,2,"Hada","Acero y Veneno","Cleffa-Clefairy-Clefable"},								
								{"Igglybuff",174,2,"Hada y Normal","Acero y Veneno","Igglybuff-Jigglypuff-Wigglytuff"},								
								{"Togepi",175,2,"Hada","Acero y Veneno","Togepi-Togetic"},
								{"Togetic",176,2,"Hada y Acero","Acero y Veneno","Togepi-Togetic"},								
								{"Natu",177,2,"Psíquico y Volador","Eléctrico, Hielo, Roca, Fantasma y Siniestro","Natu-Xatu"},
								{"Xatu",178,2,"Psíquico y Volador","Eléctrico, Hielo, Roca, Fantasma y Siniestro","Natu-Xatu"},								
								{"Mareep",179,2,"Eléctrico","Tierra","Mareep-Flaffy-Ampharos"},
								{"Flaffy",180,2,"Eléctrico","Tierra","Mareep-Flaffy-Ampharos"},
								{"Ampharos",181,2,"Eléctrico","Tierra","Mareep-Flaffy-Ampharos"},								
								{"Bellosom",182,2,"Planta y Veneno","Fuego, Volador, Hielo y Psiquico","Oddish-Gloom-Bellosom"},								
								{"Marill",183,2,"Agua y Hada","Veneno, Planta y Eléctrico","Marill-Azumarril"},								
								{"Azumarril",184,2,"Agua y Hada","Veneno, Planta y Eléctrico","Seel-Dewgong"},																
								{"Sudowoodo",185,2,"Roca","Acero, Lucha, Agua, Hielo, Planta y Tierra","Sudowoodo"},																
								{"Politoed",186,2,"Agua","Planta y Eléctrico","Poliwag-Poliwhirl-Politoed"},																
								{"Hoppip",187,2,"Planta y Volador","Fuego, Volador, Hielo, Veneno y Roca","Hoppip-Skyploom-Jumpluff"},
								{"Skyploom",188,2,"Planta y Volador","Fuego, Volador, Hielo, Veneno y Roca","Hoppip-Skyploom-Jumpluff"},
								{"Jumpluff",189,2,"Planta y Volador","Fuego, Volador, Hielo, Veneno y Roca","Hoppip-Skyploom-Jumpluff"},								
								{"Aipom",190,2,"Normal","Lucha","Aipom"},																
								{"Sunkern",191,2,"Planta","Fuego, Volador, Hielo, Veneno y Bicho","Sunkern-Sunflora"},
								{"Sunflora",192,2,"Planta","Fuego, Volador, Hielo, Veneno y Bicho","Sunkern-Sunflora"},																
								{"Yanma",193,2,"Bicho y Volador","Fuego, Volador, Hielo, Eléctrico y Roca","Yanma"},																
								{"Wooper",194,2,"Agua y Tierra","Planta","Wooper-Quagsire"},
								{"Quagsire",195,2,"Agua y Tierra","Planta","Wooper-Quagsire"},								
								{"Espeon",196,2,"Psiquico","Siniestro, Bicho, Fantasma","Eevee-Espeon"},								
								{"Umbreon",197,2,"Siniestro","Hada, Bicho, Lucha","Eevee-Umbreon"},								
								{"Murkrow",198,2,"Volador y Siniestro","Hada, Hielo, Roca y Eléctrico","Murkrow"},																
								{"Slowking",199,2,"Agua y Psíquico","Fantasma, Siniestro, Bicho, Planta y Eléctrico","Krabby-Kingler"},								
								{"Misdreavus",200,2,"Fantasma","Fantasma y Siniestro","Misdreavus"},																
								{"Unown",201,2,"Psiquico","Siniestro, Bicho, Fantasma","Unown"},								
								{"Wobbuffet",202,2,"Psiquico","Siniestro, Bicho, Fantasma","Wobbuffet"},																
								{"Girafarig",203,2,"Normal y Psiquico","Siniestro y Bicho","Girafarig"},								
								{"Pineco",204,2,"Bicho","Fuego, Volador y Roca","Pineco-Forretress"},												
								{"Forretress",205,2,"Bicho","Fuego","Pineco-Forretress"},																
								{"Dunsparce",206,2,"Normal","Lucha", "Dunsparce"},								
								{"Gligar",207,2,"Tierra y Volador","Agua y Hielo", "Gligar"},								
								{"Steelix",208,2,"Acero y Tierra","Fuego, Lucha, Agua y Tierra","Onix-Steelix"},																
								{"Snubull",209,2,"Hada","Acero y Veneno","Snubull-Granbull"},							
								{"Granbull",210,2,"Hada","Acero y Veneno","Snubull-Granbull"},																
								{"Qwilfish",211,2,"Agua y Veneno","Psiquico, Eléctrico y Tierra","Qwilfish"},								
								{"Scizor",212,2,"Bicho y Acero","Fuego","Scyther-Scizor"},																
								{"Shuckle",213,2,"Bicho y Roca","Acero, Roca y Agua ","Shuckle"},															
								{"Heracross",214,2,"Bicho y Lucha","Fuego, Volador, Psíquico y Hada","Heracross"},															
								{"Sneasel",215,2,"Siniestro y Hielo","Acero, Fuego, Lucha, Roca, Hada y Bicho","Sneasel"},																
								{"Teddiursa",216,2,"Normal","Lucha","Teddiursa-Ursaring"},
								{"Ursaring",217,2,"Normal","Lucha","Teddiursa-Ursaring"},																
								{"Slugma",218,2,"Fuego","Agua, Tierra y Roca","Slugma-Magcargo"},
								{"Magcargo",219,2,"Fuego y Roca","Agua, Tierra, Lucha y Roca","Slugma-Magcargo"},																
								{"Swinub",220,2,"Hielo y Tierra","Acero, Planta, Agua, Lucha y Fuego","Swinub-Piloswine"},
								{"Piloswine",221,2,"Hielo y Tierra","Acero, Planta, Agua, Lucha y Fuego","Swinub-Piloswine"},																
								{"Corsola",222,2,"Agua y Roca","Planta, Eléctrico, Lucha y Tierra","Corsola"},															
								{"Remoraid",223,2,"Agua","Planta y Elétrico","Remoraid-Octillery"},								
								{"Octillery",224,2,"Agua","Planta y Elétrico","Remoraid-Octillery"},																
								{"Delibird",225,2,"Hielo y Volador","Acero, Fuego, Eléctrico y Roca","Delibird"},																
								{"Mantine",226,2,"Agua y Volador","Eléctrico y Roca","Magmar"},																
								{"Skarmory",227,2,"Acero y Volador","Fuego y Eléctrico","Skarmory"},																
								{"Houndour",228,2,"Siniestro y Fuego","Agua, Lucha, Tierra y Roca","Houndour-Houndoom"},								
								{"Houndoom",229,2,"Siniestro y Fuego","Agua, Lucha, Tierra y Roca","Houndour-Houndoom"},								
								{"Kingdra",230,2,"Agua y Dragón","Hada y Dragón","Horsea-Seadra-Kingdra"},																
								{"Phanpy",231,2,"Tierra","Planta, Agua y Hielo","Phanpy-Donphan"},								
								{"Donphan",232,2,"Tierra","Planta, Agua y Hielo","Phanpy-Donphan"},																
								{"Porygon 2",233,2,"Normal","Lucha","Porygon 2"},								
								{"Stantler",234,2,"Normal","Lucha","Stantler"},								
								{"Smeargle",235,2,"Normal","Lucha","Smeargle"},								
								{"Tyrogue",236,2,"Lucha","Psiquico, Volador y Hada","Tyrogue-Hitmontop/Hitmonlee/Hitmonchan"},																
								{"Hitmontop",237,2,"Lucha","Psiquico, Volador y Hada","Tyrogue-Hitmontop"},																
								{"Smoochum",238,2,"Hielo y Psiquico","Acero, Fantasma, Fuego, Siniestro, Roca y Bicho","Smoochum-Jynx"},								
								{"Elekid",239,2,"Eléctrico","Tierra","Elekid-Electabuzz"},								
								{"Magby",240,2,"Fuego","Agua, Tierra y Roca","Magby-Magmar"},								
								{"Miltank",241,2,"Normal","Lucha","Miltank"},															
								{"Blissey",242,2,"Normal","Lucha","Chansey-Blissey"},																								
								{"Raikou",243,2,"Eléctrico","Hielo y Roca","Raikou"},																
								{"Entei",244,2,"Fuego","Agua, Tierra y Roca","Entei"},															
								{"Suicune",245,2,"Hielo","Acero, Fuego, Eléctrico y Roca","Suicune"},																
								{"Larvitar",246,2,"Roca y Tierra","Agua, Acero, Lucha, Hielo, Planta y Tierra","Larvitar-Pupitar-Tyranitar"},								
								{"Pupitar",247,2,"Roca y Tierra","Agua, Acero, Lucha, Hielo, Planta y Tierra","Larvitar-Pupitar-Tyranitar"},
								{"Tyranitar",248,2,"Roca y Siniestro","Agua, Acero, Lucha, Hada, Planta, Tierra y Bicho","Larvitar-Pupitar-Tyranitar"},								
								{"Lugia",249,2,"Psíquico y Volador","Eléctrico, Hielo, Roca, Fantasma y Siniestro","Lugia"},								
								{"Ho-Oh",250,2,"Volador y Fuego","Agua, Eléctrico y Roca","Ho-Oh"},								
								{"Celebi",251,2,"Psiquico y Planta","Fantasma, Siniestro, Bicho, Hielo, Fuego, Volador y Veneno","Celebi"},							
								{"Messi",252,2,"Legendario","El Bicho","Messi_chikito-Messi-Messirve"},
								{"El Bicho",253,2,"Legendario","Messirve y Mebale","El Bicho-Suuuuuu"}};
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
					printf("\t|Escriba N para buscar al pokemon por su numero de pokedex o M para buscarlo por su nombre\n");
					printf("\t-------------------------------------------------------------------------------------------\n");
					scanf("%s", &buscar);
					system("cls");
					
					if((buscar == 'N') || (buscar == 'n'))
						p = 1;
					else if((buscar == 'M') || (buscar == 'm'))
						p = 2;
					
					switch(p){
						case 1:
							
							regresar = 0;
							
							printf("\tIntroduce el numero del pokemon:\n");
							printf("\t--------------------------------\n");
							scanf("%d", &nPokedex);
							
							for(i = 0 ; i < 253 ; i++){
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
						case 2:
							regresar = 0;	
							printf("\tIntroduce el nombre del pokemon:\n");
							printf("\t--------------------------------\n");
							scanf("%s", &nombre);
							
							google(nombre, poke);
								
							
						break;
						
					}
						regresar = 0;
						printf("\t--------------------------------------- \n");
						printf("\t|¿Desean consultar algun otro pokemon?|\n");
						printf("\t|Escriba S o N                        |\n");
						printf("\t--------------------------------------- \n");
						scanf("%s", &opcion1);
						
						
						if((buscar == 'S') || (buscar == 's'))
							p = 1;
						else if((buscar == 'N') || (buscar == 'n'))
							p = 2;
						
						regresar = 0;
						switch(buscar){
							case 1:
								regresar++;
							break;
							case 2:
								printf("\t----------------------------------------------------------------\n");
								printf("\t|                    ¿Desea volver al menu?                    |\n");
							
							break;	
						}
					
				}while(regresar == 1);
				
				printf("\t|Pulse 1 si desea volver al menu principal o 2 si quiere salir|\n");
				printf("\t---------------------------------------------------------------\n");
				scanf("%d", &seleccion);	
				volver = vuelta(seleccion);
				
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
						printf("\t|Pulse 1 si desea volver al menu principal o 2 si quiere salir|\n");
						printf("\t---------------------------------------------------------------\n");
						scanf("%d", &seleccion);
						volver = vuelta(seleccion);
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
								printf("\t|Pulse 1 si desea volver al menu principal o 2 si quiere salir|\n");
								printf("\t---------------------------------------------------------------\n");
								scanf("%d", &seleccion);
								volver = vuelta(seleccion);
              				break;
              				
              				case 2:
              					system("cls");
              						volver = 0;
								system("color 75");
								
								int t = 0, u;
								char texto2[N];
								
								fentrada = fopen("gimnasios2.txt","r");
								
								if(fentrada == NULL ){
									printf("No hay fichero\n");
									return 0;
								}
								
								while(fscanf(fentrada,"%c",&texto1[y] ) != EOF){
									y++;
								}
								for (u = 0; u < t; w++){
									printf("%c",texto1[a]);
								}
								fclose(fentrada);
								printf("\t|Pulse 1 si desea volver al menu principal o 2 si quiere salir|\n");
								printf("\t---------------------------------------------------------------\n");
								scanf("%d", &seleccion);
              					volver = vuelta(seleccion);
              				break;
						  }
				break;
		        case 8:
					volver = 0;
					system("color 75");
					
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
					printf("\t|Pulse 1 si desea volver al menu principal o 2 si quiere salir|\n");
					printf("\t---------------------------------------------------------------\n");
					scanf("%d", &seleccion);
					volver = vuelta(seleccion);
				break;
	
				case 9:
					volver = 0;
					system("color 75");
					printf("\t|Pulse 1 si desea volver al menu principal o 2 si quiere salir|\n");
					printf("\t---------------------------------------------------------------\n");
					scanf("%d", &seleccion);
					volver = vuelta(seleccion);
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
				
				printf("\t|Pulse 1 si desea volver al menu principal o 2 si quiere salir|\n");
				printf("\t---------------------------------------------------------------\n");
				scanf("%d", &seleccion);
				volver = vuelta(seleccion);
			break;
			case 5:
				volver = 0;
				system("color 75");
				
				int t = 0, g;
				char texto2[N];
			
				
				fentrada = fopen("info.txt","r");
				
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
				printf("\t|Pulse 1 si desea volver al menu principal o 2 si quiere salir|\n");
				printf("\t---------------------------------------------------------------\n");
				scanf("%d", &seleccion);
				volver = vuelta(seleccion);
			break;
		}	
	} while(volver == 1);
	

	return 0;
}

