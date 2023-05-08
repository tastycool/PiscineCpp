/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tberube- <tberube-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 14:07:37 by tberube-          #+#    #+#             */
/*   Updated: 2023/05/08 14:50:51 by tberube-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>

class PhoneBook;

class Contact
{
    public:
        Contact();
        ~Contact();

        void setName(std::string new_val);
        void setLastName(std::string new_val);
        void setNickName(std::string new_val);
        void setPhoneNumber(std::string new_val);
        void setDarkestSecret(std::string new_val);

        std::string getName(void) const;
        std::string getLastName(void) const;
        std::string getNickName(void) const;
        std::string getPhoneNumber(void) const;
        std::string getDarkestSecret(void) const;
        
private:
       std::string name;
       std::string lastName;
       std::string nickName;
       std::string phoneNumber;
       std::string darkestSecret;
};
 
#endif