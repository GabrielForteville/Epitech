/*
** ldi.c for  in /home/hurlu/rendu/CPE_2015_corewar/VM/src/instructions
**
** Made by Hugo Willaume
** Login   <willau_h@epitech.net>
**
** Started on  Sat Mar 26 21:46:40 2016 Hugo Willaume
** Last update Sun Mar 27 22:04:25 2016 Hugo Willaume
*/

#include        "virtual.h"
#include        "op.h"

void	my_ldi(t_champions *allchamp,
	       t_champions *actualchamp,
	       t_arena *arena,
	       t_process *actualprocess)
{
  (void)allchamp;
  (void)actualchamp;
  (void)arena;
  actualprocess->pc++;

}
