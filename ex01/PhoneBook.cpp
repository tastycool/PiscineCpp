/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tberube- <tberube-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 14:07:27 by tberube-          #+#    #+#             */
/*   Updated: 2023/05/08 13:58:55 by tberube-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <cctype>

PhoneBook::PhoneBook()
{
    std::cout << "PhoneBook is in construction" << std::endl;
}

PhoneBook::~PhoneBook()
{
    std::cout << "PhoneBook is Destroyed" << std::endl;
}

void PhoneBook::_addName(int i)
{
    std::string str;
    int j = 0;
    do
    {
        if (j > 0)
            std::cout << "\033[38;5;160mWrong entry try again\033[0m" << std::endl;
        std::cout << "Wait for Name : ";
        getline(std::cin, str);
        if (std::cin.eof())
            exit(1);
        j++;  
    } while (str.length() == 0);
    _contact[i].setName(str);
}

void PhoneBook::_addLastName(int i)
{
    std::string str;
    int j = 0;
    do
    {
        if (j > 0)
                std::cout << "\033[38;5;160mWrong entry try again\033[0m" << std::endl;
        std::cout << "Wait for Last Name : ";
        getline(std::cin, str);
        if (std::cin.eof())
            exit(1);
        j++;
    } while (str.length() == 0);
    _contact[i].setLastName(str); 
}

void PhoneBook::_addNickName(int i)
{
    std::string str;
    int j = 0;
    do
    {
        if (j > 0)
                std::cout << "\033[38;5;160mWrong entry try again\033[0m" << std::endl;
        std::cout << "Wait for NickName : ";
        getline(std::cin, str);
        if (std::cin.eof())
            exit(1);
        j++;
    } while (str.length() == 0);
    _contact[i].setNickName(str);
}

void PhoneBook::_addPhoneNumber(int i)
{
    std::string str;
    int j = 0;
    int allDigits = 0;
    
    do
    {
        if (j > 0)
                std::cout << "\033[38;5;160mWrong entry try again\033[0m" << std::endl;
        std::cout << "Wait for PhoneNumber : ";
        getline(std::cin, str);
        if (std::cin.eof())
            exit(1);
        j++;
        for (std::size_t i = 0; i < str.size(); ++i)
        {
            if (!isdigit(str[i]))
            {
                allDigits = 1;
                break;
            }
            else
                allDigits = 0;
        }
        if (str.length() != 10)
            std::cout << "\033[38;5;160mNeed to have 10 numbers\033[0m" << std::endl;
    } while (str.length() != 10 || allDigits == 1);
    _contact[i].setPhoneNumber(str);
}

void PhoneBook::_addDarkestSecret(int i)
{
    std::string str;
    int j = 0;
    do
    {
        if (j > 0)
                std::cout << "\033[38;5;160mWrong entry try again\033[0m" << std::endl;
        std::cout << "Wait for Darkest Secret : ";
        getline(std::cin, str);
        if (std::cin.eof())
            exit(1);
        j++;
    } while (str.length() == 0);
    _contact[i].setDarkestSecret(str);
}

std::string PhoneBook::verifierNameLen(std::string str)
{
    if (str.length() > 10)
    {
        str = str.substr(0, 9);
        str.append(1, '.');
        return (str);
    }
    else if (str.length() < 10)
    {
        int nbSpace = 10 - str.length();
        str.insert(0, nbSpace, ' ');
        return (str);
    }
    return (str);
}

std::string PhoneBook::verifierLastNameLen(std::string str)
{
    if (str.length() > 10)
    {
        str = str.substr(0, 9);
        str.append(1, '.');
        return (str);
    }
    else if (str.length() < 10)
    {
        int nbSpace = 10 - str.length();
        str.insert(0, nbSpace, ' ');
        return (str);
    }
    return (str);
}

std::string PhoneBook::verifierNickNameLen(std::string str)
{
    if (str.length() > 10)
    {
        str = str.substr(0, 9);
        str.append(1, '.');
        return (str);
    }
    else if (str.length() < 10)
    {
        int nbSpace = 10 - str.length();
        str.insert(0, nbSpace, ' ');
        return (str);
    }
    return (str);   
}

void PhoneBook::printSearch()
{
    std::string maxLenName;
    std::string maxLenLastName;
    std::string maxLenNickName;
    std::string str;
    int num;

    num = 0;
    for (int i = 0; i < 8; i++)
    {
        maxLenName = verifierNameLen(this->_contact[i].getName());
        maxLenLastName = verifierLastNameLen(this->_contact[i].getLastName());
        maxLenNickName = verifierNickNameLen(this->_contact[i].getNickName());
        std::cout << i << "|" << maxLenName << "|" << maxLenLastName << "|" << maxLenNickName << "|" << std::endl;
        std::cout << "-----------------------------------" << std::endl;
    }
    std::cout << "\033[0;35mÉcrire l'index du contact : \033[0m";
    getline(std::cin, str);
    if (std::cin.eof())
        exit(1);
    num = atoi(str.c_str());
    if (str.length() == 1 &&isdigit(str[0]) && num <= 7 && num >= 0)
    {  
        for (int i = 0; i <= num; i++)
        {
            maxLenName = verifierNameLen(this->_contact[i].getName());
            maxLenLastName = verifierLastNameLen(this->_contact[i].getLastName());
            maxLenNickName = verifierNickNameLen(this->_contact[i].getNickName());
        }
        std::cout << num << "|" << maxLenName << "|" << maxLenLastName << "|" << maxLenNickName << "|" << std::endl;
        std::cout << "\033[38;5;46mClick enter to continue\033[0m";
        getline(std::cin, str);
        if (std::cin.eof())
            exit(1);
    }
    else
    {
        std::cout << "Wrong entry" << std::endl;
    }
    
}

void PhoneBook::addContact(int i)
{   
    _addName(i);
    _addLastName(i);
    _addNickName(i);
    _addPhoneNumber(i);
    _addDarkestSecret(i);
}