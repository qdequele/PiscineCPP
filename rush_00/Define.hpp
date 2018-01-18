/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Define.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwiessle <kwiessle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/13 14:54:54 by kwiessle          #+#    #+#             */
/*   Updated: 2018/01/14 16:05:56 by kwiessle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DEFINE_HPP
# define DEFINE_HPP


# define KEY_ESC 27
# define KEY_SPACE 32

# define NB_OBJECTS 30
# define NB_ENEMIES 70
# define NB_BULLETS 100

# define FRAME_RATE(X) (abs((long long int)difftime(old, now)) % (X * 5)) < 5 || (abs((long long int)difftime(old, now)) % (X * 5)) > ((X * 5) - 5)


#endif
