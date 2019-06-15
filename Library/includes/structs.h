#ifndef STRUCTS_H
# define STRUCTS_H

typedef struct		s_mult
{
	int				i;
	int				j;
	int				n1;
	int				n2;
	int				i_n1;
	int				i_n2;
	int				carry;
	int				sum;
	int				*result;
	char			*s;
}					t_mult;

typedef struct		s_bt
{
	void			*item;
	struct s_bt		*left;
	struct s_bt		*right;
}					t_bt;

typedef struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;

typedef struct		s_queue
{
	t_list			*front;
	t_list			*rear;
}					t_queue;

typedef struct		s_icase
{
	int				n;
	struct s_icase	*next;
}					t_icase;

#endif
