#include <iostream>
#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
    std::cout << "Constructeur PhoneBook call" << std::endl;
    return ;
}

PhoneBook::~PhoneBook(void)
{
    std::cout << "Destructeur PhoneBook call" << std::endl;
    return ;
}

int main()
{
    PhoneBook instance;
    char str[100];
    std::cout << "\033[38;5;46mADD : Enregistre un nouveau contact\033[0m" << std::endl;
    std::cout << "\033[0;36mSEARCH : Affiche le contact demandé\033[0m" << std::endl;
    std::cout << "\033[38;5;160mEXIT : Ferme le programme\033[0m" << std::endl;
    std::cout << "En attente de commande : ";
    std::cin >> str;
    
    std::cout << "Vous avez écris : " << str << std::endl;
    return (0);
}