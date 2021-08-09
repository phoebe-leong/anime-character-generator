#include <iostream>
#include <array>
#include <fstream>

std::ofstream anime;

int main () {
    std::srand(std::time(nullptr));
    
    int age[] = {9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    std::string gender[] = {"Male", "Female", "Non Binary"};
    std::string personality[] = {"Bouncy", "Innocent", "Sad", "Mean", "Shy", "Quiet"};
    std::string names[] = {"Kokichi", "Yumano", "Katamitsu", "Nagito", "Azuto", "Alex", "Sakura", "Maple", "Arirata"};
    std::string hairColour[] = {"Brown", "Black", "Blonde", "Red", "Blue"};
    std::string occupation[] = {"Student", "Fast Food Worker", "Model", "Actor/Actress"};
    std::string location[] = {"Tokyo, JA", "Sapporo, JA", "Yokohama, JA", "Akita, JA", "Sendai, JA", "Nagoya, JA", "Osaka, JA", "Hiroshima, JA", "Kitakyushu, JA", "California, US", "Sydney, AU"};
    std::string hobbies[] = {"Watching VTubers", "Flirting", "Doing nothing", "Having existential crises", "Sky diving", "Climbing", "Crying"};

    anime.open("anime.txt");

    anime << "Name: " << names[rand() % sizeof(names) / sizeof(names[0])] << "\n";
    anime << "Age: " << age[rand() % sizeof(age) / sizeof(age[0])] << "\n";
    anime << "Gender: " << gender[rand() % sizeof(gender) / sizeof(gender[0])] << "\n";

    anime << "Hair Colour: " << hairColour[rand() % sizeof(hairColour) / sizeof(hairColour[0])] << "\n";
    anime << "Personality: " << personality[rand() % sizeof(personality) / sizeof(personality[0])] << "\n";
    anime << "Occupation: " << occupation[rand() % sizeof(occupation) / sizeof(occupation[0])] << "\n";
    anime << "Lives: " << location[rand() % sizeof(location) / sizeof(location[0])] << "\n";
    anime << "Hobby: " << hobbies[rand() % sizeof(hobbies) / sizeof(hobbies[0])];
    anime.close();
    std::cout << "Finished";
    std::cin.get();
    return 0;
}
