/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmizuno <mmizuno@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 18:24:40 by mmizuno           #+#    #+#             */
/*   Updated: 2022/04/20 18:43:57 by mmizuno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

// ================================ library ================================= //

# include "../incs/Animal.hpp"

// ================================= class ================================== //

class Dog : public Animal
{
     public:
        // [ constructor / destructor ]
        Dog();
        Dog(const Dog &dog);
        ~Dog();

        // [ operator ]
        Dog     &operator=(const Dog &dog);

        // [ method ]
        void    makeSound() const;
};

#endif
