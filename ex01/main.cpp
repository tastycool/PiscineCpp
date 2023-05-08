/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tberube- <tberube-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 14:07:33 by tberube-          #+#    #+#             */
/*   Updated: 2023/05/08 14:00:14 by tberube-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Contact.hpp"
#include "PhoneBook.hpp"

void printAide()
{
    std::cout << "\033[38;5;46mADD : Enregistre un nouveau contact\033[0m" << std::endl;
    std::cout << "\033[0;36mSEARCH : Affiche le contact demandé\033[0m" << std::endl;
    std::cout << "\033[38;5;160mEXIT : Ferme le programme\033[0m" << std::endl;
    std::cout << "En attente de commande : ";
}

int main()
{
    PhoneBook phoneBook;
    std::string str;
    int i = 0;
    
    do
    {
        printAide();
        getline(std::cin, str);
        if (std::cin.eof())
            exit(1);
        std::cout << "Vous avez écrit " << str << std::endl;
        if (str == "ADD")
        {
            i %= 8;
            phoneBook.addContact(i);
            i++;
        }
        else if (str == "SEARCH")
            phoneBook.printSearch();
        else if (str == "EXIT")
            break;
        else
            std::cout << "Wrong entry" << std::endl;
        
    } while (str != "EXIT");
    
}