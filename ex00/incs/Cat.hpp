/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmizuno <mmizuno@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 18:24:40 by mmizuno           #+#    #+#             */
/*   Updated: 2022/04/20 19:04:42 by mmizuno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

// ================================ library ================================= //

# include "../incs/Animal.hpp"

// ================================= class ================================== //

class Cat : public Animal
{
     public:
        // [ constructor / destructor ]
        Cat();
        Cat(const Cat &cat);
        ~Cat();

        // [ operator ]
        Cat     &operator=(const Cat &cat);

        // [ method ]
        void    makeSound() const;
};

#endif
