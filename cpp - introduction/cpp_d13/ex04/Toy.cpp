//
// Toy.cpp for  in /home/fortevg/rendu/piscine_cpp/cpp_d13
// 
// Made by Gabriel Forteville
// Login   <fortev_g@epitech.net>
// 
// Started on  Mon Jan 16 11:06:11 2017 Gabriel Forteville
// Last update Mon Jan 16 15:25:56 2017 Gabriel Forteville
//

#include <iostream>
#include "Toy.h"

Toy::Toy():
  _type(BASIC_TOY),
  _name("toy"),
  _picture(Picture())
{}

Toy::Toy(ToyType const type, std::string const& name, std::string const& file):
  _type(type),
  _name(name),
  _picture(Picture(file))
{}

Toy::~Toy() {}

void Toy::speak(std::string const& sentence)
{
 std::cout << _name << " \"" << sentence << "\"" << std::endl;
}


Toy::ToyType Toy::getType() const { return _type; }

std::string const& Toy::getName() const { return _name; }

void Toy::setName(std::string const& name) { _name = name; }

bool Toy::setAscii(std::string const& file) { return _picture.getPictureFromFile(file); }

std::string const& Toy::getAscii() const { return _picture._data; }

void Toy::operator<<(std::string const& picture)
{
  _picture._data = picture;
}

std::ostream & operator<<(std::ostream & os, Toy const& toy)
{
  os << toy._name << std::endl << toy._picture._data << std::endl;
  return os;
}