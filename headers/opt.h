/*
** opt.h for opt_parser_example in headers
**
** Made by Benoit Hamon
** Login   <hamon_e@epitech.net>
**
** Started on  Sun Dec 04 13:07:21 2016 Benoit Hamon
** Last update Sun Dec 04 13:34:59 2016 Benoit Hamon
*/

#ifndef HEADERS_OPT_H_
# define HEADERS_OPT_H_

typedef struct		s_opt_data
{
  char			*b;
  int			a;
}			t_opt_data;

typedef enum		e_opt_bit
{
  OPT_0 = 1,
  OPT_1 = 2,
  OPT_2 = 4,
  OPT_3 = 8
}			t_opt_bit;

#endif /* end of include guard: HEADERS_OPT_H_ */
