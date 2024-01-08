/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hongbaki <hongbaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 13:28:13 by hongbaki          #+#    #+#             */
/*   Updated: 2023/11/14 10:24:14 by hongbaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
 
class Cat : public Animal
{
    //when you use protected instead of private at main class Animal
    //derived class(cat and dog) do not need to declear private member variable
    private:
        
    public:
        Cat(void);
        Cat(const Cat &_Cat);
        Cat& operator=(const Cat &_Cat);
        ~Cat(void);

        void makeSound() const;
};

#endif
