#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>


using namespace std;

//Program Functions Declarations

void trainer_1_team ();
void trainer_2_team();
void team_seclection();

//TRAINER 1 = Player
//TRAINER 2 = Opponent
int trainer1 = 0;
int trainer2 = 0;

// POKEDEX

string pokedex[] = {"", "Bulbasaur", "Ivysaur", "Venusaur", "Charmander", "Charmeleon", "Charizard", 
        "Squirtle", "Wartortle", "Blastoise", "Caterpie", "Metapod", "Butterfree", 
        "Weedle", "Kakuna", "Beedrill", "Pidgey", "Pidgeotto", "Pidgeot", 
        "Rattata", "Raticate", "Spearow", "Fearow", "Ekans", "Arbok", 
        "Pikachu", "Raichu", "Sandshrew", "Sandslash", "Nidoran (Male)", "Nidorina (Female)", 
        "Nidoqueen", "Nidoran♂", "Nidorino", "Nidoking", "Clefairy", "Clefable", 
        "Vulpix", "Ninetales", "Jigglypuff", "Wigglytuff", "Zubat", "Golbat", 
        "Oddish", "Gloom", "Vileplume", "Paras", "Parasect", "Venonat", 
        "Venomoth", "Diglett", "Dugtrio", "Meowth", "Persian", "Psyduck", 
        "Golduck", "Mankey", "Primeape", "Growlithe", "Arcanine", "Poliwag", 
        "Poliwhirl", "Poliwrath", "Abra", "Kadabra", "Alakazam", "Machop", 
        "Machoke", "Machamp", "Bellsprout", "Weepinbell", "Victreebel", 
        "Tentacool", "Tentacruel", "Geodude", "Graveler", "Golem", 
        "Ponyta", "Rapidash", "Slowpoke", "Slowbro", "Magnemite", "Magneton", 
        "Farfetch'd", "Doduo", "Dodrio", "Seel", "Dewgong", "Grimer", 
        "Muk", "Shellder", "Cloyster", "Gastly", "Haunter", "Gengar", 
        "Onix", "Drowzee", "Hypno", "Krabby", "Kingler", "Voltorb", 
        "Electrode", "Exeggcute", "Exeggutor", "Cubone", "Marowak", 
        "Hitmonlee", "Hitmonchan", "Lickitung", "Koffing", "Weezing", 
        "Rhyhorn", "Rhydon", "Chansey", "Tangela", "Kangaskhan", 
        "Horsea", "Seadra", "Goldeen", "Seaking", "Staryu", "Starmie", 
        "Mr. Mime", "Scyther", "Jynx", "Electabuzz", "Magmar", "Pinsir", 
        "Tauros", "Magikarp", "Gyarados", "Lapras", "Ditto", "Eevee", 
        "Vaporeon", "Jolteon", "Flareon", "Porygon", "Omanyte", "Omastar", 
        "Kabuto", "Kabutops", "Aerodactyl", "Snorlax", "Articuno", "Zapdos", 
        "Moltres", "Dratini", "Dragonair", "Dragonite", "Mewtwo", "Mew"};


//main function

int main(){


team_seclection();


system("PAUSE");


    return 0;
}


// additional functions


void trainer_1_team () {



srand(time(nullptr));

int number_player1 = rand() % 152;

cout << "Press any key to generate a random number: " << endl;


cin.get();


cout << "Your Pokemon Is " << number_player1[pokedex] << "!" << " (#" << number_player1 << " In The Pokedex)"<< endl;

trainer1 = number_player1;

}

void trainer_2_team () {



srand(time(nullptr));

int number_player2 = rand() % 152;


/*
cout << "Your opponent will battle with " << number_player2[pokedex] << "!" << " (#" << number_player2 << " In The Pokedex)"<< endl;
*/



trainer2 = number_player2;

}

void team_seclection(){

   
   
    trainer_1_team();

cout << "You will battle with " << trainer1[pokedex] << endl;



cout << "Your opponent will now select their Pokemon. Press any key to continue" << endl;
cin.get();

trainer_2_team();

cout << "Your opponent will battle with " << trainer2[pokedex] << " (#" << trainer2 << " In The Pokedex)" << endl;



}