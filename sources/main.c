/*
** example.c for PSU_2015_42sh in sources/opt
**
** Made by Nicolas Goudal
** Login   <goudal_n@epitech.net>
**
** Started on  Sun Jun 05 20:23:11 2016 Nicolas Goudal
** Last update Sun Dec 04 13:13:18 2016 Benoit Hamon
*/

#include <stdio.h>
#include <stdbool.h>
#include <stddef.h>
#include "tools/tools.h"
#include "opt_parser/opt.h"
#include "opt.h"

static const t_opt_dico	g_opt_dico[] =
{
  {OPT_0, 'c', "color", true, offsetof(t_opt_data, a), OPT_TYPE_NBR},
  {OPT_1, 'a', "all", true, offsetof(t_opt_data, b), OPT_TYPE_STRING},
  {OPT_2, 'b', "escape", false},
  {OPT_3, 'd', "directory", false},
  {0}
};

void			print_list(t_opt_name *list)
{
  if (list)
  {
    printf("%s\n", list->str);
    print_list(list->next);
  }
}

int			main(int argc, char const* argv[])
{
  t_opt			*opt;
  t_opt_data		*data;

  opt = opt_init(argc, argv + 1, sizeof(t_opt_data), g_opt_dico);
  if (opt)
  {
    data = opt->data;
    printf("%d : %s : %d\n", opt->bit, data->b, data->a);
    print_list(opt->name);
    the_free(3, FREE_STR, data->b, FREE_STR, opt->data, FREE_OPT, opt);
  }
  else
    printf("Usage : \n");
  return (0);
}
