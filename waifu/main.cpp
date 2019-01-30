// Hello there!
// This program generates a waifu for you using random variable selections.
// Program written by Sarah Nadzan.

// Libraries included.
#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
#include <fstream>

// Defines the maximum amount of generations.

static const size_t MAX_LOVES = 100; //love types
static const size_t MAX_MODIFIERS = 100; //hair modifier types
static const size_t MAX_HAIRCOLORS = 100; // hair color types
static const size_t MAX_HAIRSTYLES = 100; // hair style types
static const size_t MAX_EYECOLORS = 100; // eye color types
static const size_t MAX_COMPLEXION = 100; // complexion types
static const size_t MAX_PERSONALITY = 100; // personality types
static const size_t MAX_ANIME = 100; // anime types.

struct waifu{
    std::string love; // love type.
    std::string modifier; // hair modifier type.
    std::string haircolor; //hair color type.
    std::string hairstyle; //hair style type.
    std::string eyecolor; // eye color.
    std::string complexion; // complexion.
    std::string personality; // personality.
    std::string anime; // anime.
};

// Function to overload the operator to work with the waifu types. RHS = right hand side.
// Outputs the anime girl description.

std::ostream & operator << (std::ostream & os, const waifu & rhs) {
    os << "She is a " << rhs.love << ". \n" << std::endl;
    os << "Her hair is a " << rhs.modifier << " " << rhs.haircolor << ", in a " << rhs.hairstyle << " style. \n" << std::endl;
    os << "Her eyes are " << rhs.eyecolor << ", and she has a " << rhs.complexion << " complexion.\n" << std::endl;
    os << "She has a very " << rhs.personality << " personality, and she is from a " << rhs.anime << " anime!" << std::endl;


    return os;
}

// Main loop.

int main() {

    //Initializing program loop.

    std::string play_again = "y";

    while (play_again == "y") {

        // Seeding the random generator.

        srand(time(nullptr));

        // String array.

        std::string loves[MAX_LOVES]; // loves.
        std::string hairmodifiers[MAX_MODIFIERS]; // hair modifiers.
        std::string haircolors[MAX_HAIRCOLORS]; // hair colors.
        std::string hairstyles[MAX_HAIRSTYLES]; // hair styles.
        std::string eyecolors[MAX_EYECOLORS]; // eye colors.
        std::string complexions[MAX_COMPLEXION]; // complexion.
        std::string personalities[MAX_PERSONALITY]; // personality.
        std::string animes[MAX_ANIME]; // anime.

        // Opening the file.

        //love types.
        std::ifstream lovestream("lovetype.txt");
        if (!lovestream) {
            std::cout << "Unable to open love type file." << std::endl;
        }

        // hair modifiers.
        std::ifstream modifierstream("hairmodifiertype.txt");
        if (!modifierstream) {
            std::cout << "Unable to open hair modifier file." << std::endl;
        }

        // hair colors.
        std::ifstream haircolorstream("haircolortype.txt");
        if (!haircolorstream) {
            std::cout << "Unable to open hair color file." << std::endl;
        }

        // hair styles.
        std::ifstream hairstylestream("hairstyletype.txt");
        if (!hairstylestream) {
            std::cout << "Unable to open hair style file." << std::endl;
        }

        // eye colors.
        std::ifstream eyecolorstream("eyecolortype.txt");
        if (!eyecolorstream) {
            std::cout << "Unable to open eye color file." << std::endl;
        }

        // complexions.
        std::ifstream complexionstream("complexiontype.txt");
        if (!complexionstream) {
            std::cout << "Unable to open complexion file." << std::endl;
        }

        //personalities.
        std::ifstream personalitystream("personalitytype.txt");
        if (!personalitystream) {
            std::cout << "Unable to open the personality file." << std::endl;
        }

        //anime.
        std::ifstream animestream("animetype.txt");
        if (!animestream) {
            std::cout << "Unable to open the anime file." << std::endl;
        }

        // Counts how many options are in the file.

        size_t lovecount = 0; //loves count.
        size_t modifiercount = 0; //hair modifier count.loves[lovecount++]
        size_t haircolorcount = 0; //hair color count.
        size_t hairstylecount = 0; //hair style count.
        size_t eyecolorcount = 0; // eye color count.
        size_t complexioncount = 0; // complexion count.
        size_t personalitycount = 0; // personality count.
        size_t animecount = 0; // anime count.

        waifu waifu;

        //Reads each line of the file and stores it in the string.

        //Love type.
        while (std::getline(lovestream, loves[lovecount++])) {
        }
        lovecount--;
        //Hair modifier type.
        while (std::getline(modifierstream, hairmodifiers[modifiercount++])) {
        }
        modifiercount--;
        //Hair color type.
        while (std::getline(haircolorstream, haircolors[haircolorcount++])) {
        }
        haircolorcount--;
        //Hair style type.
        while (std::getline(hairstylestream, hairstyles[hairstylecount++])) {
        }
        hairstylecount--;
        //Eye color type.
        while (std::getline(eyecolorstream, eyecolors[eyecolorcount++])) {
        }
        eyecolorcount--;
        //Complexion type.
        while (std::getline(complexionstream, complexions[complexioncount++])) {
        }
        complexioncount--;
        //Personality type.
        while (std::getline(personalitystream, personalities[personalitycount++])) {
        }
        personalitycount--;
        //Anime type.
        while (std::getline(animestream, animes[animecount++])) {
        }
        animecount--;

        waifu.love = loves[rand() % lovecount]; // assigning the love type of the waifu.
        waifu.modifier = hairmodifiers[rand() % modifiercount]; // assigning the hair modifier of the waifu.
        waifu.haircolor = haircolors[rand() % haircolorcount]; // assigning the hair color of the waifu.
        waifu.hairstyle = hairstyles[rand() % hairstylecount]; // assigning the hair style of the waifu.
        waifu.eyecolor = eyecolors[rand() % eyecolorcount]; // assigning the eye color of the waifu.
        waifu.complexion = complexions[rand() % complexioncount]; // assigning complexion of the waifu.
        waifu.personality = personalities[rand() % personalitycount]; // assigning the personality of the waifu.
        waifu.anime = animes[rand() % animecount]; // assigning the anime of the waifu.

        std::cout << "Your waifu is generated! \n" << std::endl;
        std::cout << waifu << std::endl;
        std::cout << "Would you like to generate another? (y/n)\n" << std::endl;
        std::cin >> play_again;
    }

    std::cout << "\nThank you for using the Waifu Generator!" << std::endl;
    return 0;

}