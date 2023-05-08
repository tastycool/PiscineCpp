/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tberube- <tberube-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 14:07:20 by tberube-          #+#    #+#             */
/*   Updated: 2023/05/08 14:09:07 by tberube-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#include <iostream>
#include <string>
#include <cstdlib>
#include "Contact.hpp"
class Contact;

class PhoneBook
{
    public:
        PhoneBook();
        ~PhoneBook();
        void addContact(int i);
        void printSearch();
        
    private:
        void _addName(int i);
        void _addLastName(int i);
        void _addNickName(int i);
        void _addPhoneNumber(int i);
        void _addDarkestSecret(int i);
        
        std::string verifierNameLen(std::string str);
        std::string verifierLastNameLen(std::string str);
        std::string verifierNickNameLen(std::string str);
        
        
        Contact _contact[8];
};

#endif