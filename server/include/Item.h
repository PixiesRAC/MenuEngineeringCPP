#ifndef ITEM_H_
# define ITEM_H_

#include <string>

typedef enum	e_type
  {
    POISSON,
    VIANDE,
    FRUIT,
    BIERE,
    OASIS,
    FALAFEL,
    BURGER,
    MOUSSAKA
  }		t_type;

/*
 * \struct t_item
 * \brief structure du menu
 *
 */

typedef struct	s_item
{
  //  t_type       	type;
  int		id;
  std::string	name;
  int		price;
  int		marge;
  
}		t_item;

#endif /* ! ITEM_H_ */
