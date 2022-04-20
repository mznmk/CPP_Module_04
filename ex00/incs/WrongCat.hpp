/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmizuno <mmizuno@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 18:24:40 by mmizuno           #+#    #+#             */
/*   Updated: 2022/04/20 19:37:19 by mmizuno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

// ================================ library ================================= //

# include "../incs/WrongAnimal.hpp"

// ================================= class ================================== //

class WrongCat : public WrongAnimal
{
     public:
        // [ constructor / destructor ]
        WrongCat();
        WrongCat(const WrongCat &cat);
        ~WrongCat();

        // [ operator ]
        WrongCat    &operator=(const WrongCat &cat);

        // [ method ]
        void        makeSound() const;
};

#endif
