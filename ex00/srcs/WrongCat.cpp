/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmizuno <mmizuno@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 18:24:39 by mmizuno           #+#    #+#             */
/*   Updated: 2022/04/20 19:09:01 by mmizuno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/WrongCat.hpp"

// ================== [ public ] constructor / destructor =================== //

// -------------------------- default contsructor --------------------------- //

WrongCat::WrongCat() : WrongAnimal()
{
    std::cout << "[WrongCat] Default constructor called" << std::endl;
    _type = "WrongCat";
}

// ---------------------------- copy contsructor ---------------------------- //

WrongCat::WrongCat(const WrongCat &cat) : WrongAnimal()
{
    std::cout << "[WrongCat] Copy constructor called" << std::endl;
    _type = cat._type;
}

// ------------------------------- destructor ------------------------------- //

WrongCat::~WrongCat()
{
    std::cout << "[WrongCat] Destructor called" << std::endl;
}

// ========================== [ public ] operator =========================== //

// ------------------------ copy assignment operator ------------------------ //

WrongCat    &WrongCat::operator=(const WrongCat &cat)
{
    std::cout << "[WrongCat] Copy assignment operator called" << std::endl;
    if (this != &cat) {
        _type = cat._type;
    }
    return *this;
}

// =========================== [ public ] method ============================ //

/*!
** @brief   make sound (ex: dog -> bark )
*/
void        WrongCat::makeSound() const
{
    std::cout << "WrongCat <" << _type << "> \"nya~! nya~! nya~!\"";
    std::cout << std::endl;
}
