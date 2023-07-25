#include <iostream>
#include <string>

std::string askText(std::string prompt);
int askNumber(std::string prompt);
void tellStory(std::string name, std::string noun, int number, std::string bodyPart, std::string verb);

int main()
{
    std::cout << "Welcome to Mad Lib\n\n";
    std::cout << "Answer the following questions to help create a story. \n";

    std::string name = askText("Please enter a name: ");
    std::string noun = askText("Please enter a plural noun: ");
        int number = askNumber("Please enter a number: ");
    std::string bodyPart = askText("Please enter a body part: ");
    std::string verb = askText("Please enter a verb: ");

    tellStory(name, noun, number, bodyPart, verb);

    system("pause");
}

std::string askText(std::string prompt) {
    std::string text;
    std::cout << prompt;
    std::cin >> text;
    return text;
}

int askNumber(std::string prompt) {
    int number;
    std::cout << prompt;
    std::cin >> number;
    return number;
}

void tellStory(std::string name, std::string noun, int number, std::string bodyPart, std::string verb) {
    std::cout << "\nThis is your story\n";
    std::cout << "After leaving the fallout bunker, ";
    std::cout << name;
    std::cout << " Looked around and seen only destruction.\n";
    std::cout << "Though in the distance, a group of ";
    std::cout << noun;
    std::cout << "Seemed to be leading a group of enslaved humans. \n";
    std::cout << "As they managed to sneak out of the bunker away from the "<<noun<<"'s\n";
    std::cout << "Suddenly, a sharp pain erupted from "<<name<<"'s"<<bodyPart<<"\n";
    std::cout << "Fearing infection, "<<name<<" "<<verb << "'d it in hopes to stop the pain!";
    std::cout << "This seemed to do the trick. But only one could hope, as "<<name<<" made their way \n through the cold world...";
}