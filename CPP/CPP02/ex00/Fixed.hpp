/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hongbaki <hongbaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 19:25:25 by hongbaki          #+#    #+#             */
/*   Updated: 2023/11/06 16:18:52 by hongbaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <string>

class Fixed
{
    private:
        int value;
        static const int bits;
        
    public:
        //Default constructor
        Fixed();
        
        //Copy constructor
        Fixed(const Fixed &_fixed);
        
        //Copy assignment operator
        Fixed& operator=(const Fixed &_fixed);
        
        int getRawBits( void ) const;
        
        //Why setRaubits is here?
        void setRawBits( int const raw );
        
        //Destructor
        ~Fixed();
};

#endif
