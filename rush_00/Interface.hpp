/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Interface.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwiessle <kwiessle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/14 16:24:37 by kwiessle          #+#    #+#             */
/*   Updated: 2018/01/14 18:44:21 by kwiessle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERFACE_HPP
# define INTERFACE_HPP

# include "Bullet.hpp"

class IEnemies {

  public:

    virtual ~IEnemies(void) {};

    virtual void    move(void) = 0;
    virtual Bullet  *shoot(void) = 0;

    virtual int		  getPosX(void) const = 0;
    virtual int 	  getPosY(void) const = 0;
    virtual int 	  getIcon(void) const = 0;
    virtual int     getColor(void) const = 0;
};

#endif
