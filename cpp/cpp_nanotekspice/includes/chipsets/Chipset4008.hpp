//
// Chipset4081.hpp for nanotekspice in /home/quersi_l/rendu/cpp_nanotekspice/includes
// 
// Made by Laurent QUERSIN
// Login   <quersi_l@epitech.net>
// 
// Started on  Thu Feb 23 11:22:53 2017 Laurent QUERSIN
// Last update Sat Mar  4 00:05:16 2017 Laurent QUERSIN
//

#ifndef CHIPSET4008_HPP_
# define CHIPSET4008_HPP_

#include	"IComponent.hpp"
#include	"Link.hpp"
#include	"Error.hh"
#include	"PinTypes.hpp"

class	Chipset4008 : public AComponent
{
private:
  PinTypes _pins[17] =
    {
      UNUSED,
      INPUT, INPUT, INPUT, INPUT,
      INPUT, INPUT, INPUT,
      UNUSED,
      INPUT,
      INPUT, OUTPUT, OUTPUT, OUTPUT,
      OUTPUT,
      INPUT,
      UNUSED
    };

public:
  Chipset4008(const std::string &);
  ~Chipset4008();
  nts::Tristate	Compute(size_t pin = 1);
  void		SetLink(size_t, nts::IComponent &, size_t);
  void		Dump() const;
  void		SetState(nts::Tristate);
};

AComponent *Create4008(const std::string &);

#endif
