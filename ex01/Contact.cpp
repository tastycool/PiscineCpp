/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tberube- <tberube-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 14:07:42 by tberube-          #+#    #+#             */
/*   Updated: 2023/05/08 14:52:26 by tberube-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
    std::cout << "Contact is in construction" << std::endl;
}

Contact::~Contact()
{
    std::cout << "Contact is Destroyed" << std::endl;
}

        // Setter

void Contact::setName(std::string new_val)
{
    name = new_val;
}

void Contact::setLastName(std::string new_val)
{
    lastName = new_val;
}

void Contact::setNickName(std::string new_val)
{
    nickName = new_val;
}

void Contact::setPhoneNumber(std::string new_val)
{
    phoneNumber = new_val;
}

        // Getter

void Contact::setDarkestSecret(std::string new_val)
{
    darkestSecret = new_val;
}

std::string Contact::getName(void) const
{
    return (this->name);
}

std::string Contact::getLastName(void) const
{
    return (this->lastName);
}

std::string Contact::getNickName(void) const
{
    return (this->nickName);
}

std::string Contact::getPhoneNumber(void) const
{
    return (this->phoneNumber);
}

std::string Contact::getDarkestSecret(void) const
{
    return (this->darkestSecret);
}

