/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssnowbir <ssnowbir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 12:16:14 by ssnowbir          #+#    #+#             */
/*   Updated: 2021/02/16 14:20:18 by ssnowbir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ASpell.hpp"
#include "ATarget.hpp"
#include "Warlock.hpp"
#include "Dummy.hpp"
#include "Fwoosh.hpp"
int main()
{
  Warlock richard("Richard", "the Titled");

  Dummy bob;
  Fwoosh* fwoosh = new Fwoosh();

  richard.learnSpell(fwoosh);

  richard.introduce();
  richard.launchSpell("Fwoosh", bob);

  richard.forgetSpell("Fwoosh");
  richard.launchSpell("Fwoosh", bob);
}
