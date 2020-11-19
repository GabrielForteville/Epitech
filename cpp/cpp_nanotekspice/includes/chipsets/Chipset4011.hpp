//
// Chipset4081.hpp for nanotekspice in /home/quersi_l/rendu/cpp_nanotekspice/includes
// 
// Made by Laurent QUERSIN
// Login   <quersi_l@epitech.net>
// 
// Started on  Thu Feb 23 11:22:53 2017 Laurent QUERSIN
// Last update Fri Mar  3 23:37:58 2017 Laurent QUERSIN
//

#ifndef CHIPSET4011_HPP_
# define CHIPSET4011_HPP_

#include	"IComponent.hpp"
#include	"Link.hpp"
#include	"Error.hh"
#include	"PinTypes.hpp"

class	Chipset4011 : public AComponent
{
private:
  PinTypes _pins[15] =
    {
      UNUSED,
      INPUT, INPUT, OUTPUT,
      OUTPUT, INPUT, INPUT,
      UNUSED,
      INPUT, INPUT, OUTPUT,
      OUTPUT, INPUT, INPUT,
      UNUSED
    };

public:
  Chipset4011(const std::string &);
  ~Chipset4011();
  nts::Tristate	Compute(size_t pin = 1);
  void		SetLink(size_t, nts::IComponent &, size_t);
  void		Dump() const;
  void		SetState(nts::Tristate);
};

AComponent *Create4011(const std::string &);

#endif