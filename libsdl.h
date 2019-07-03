/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libsdl.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <OB-96@hotmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/14 18:29:53 by obelouch          #+#    #+#             */
/*   Updated: 2019/07/03 03:35:53 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBSDL_H
# define LIBSDL_H

# define SDL_INIT_FLAGS	(SDL_INIT_VIDEO | SDL_INIT_AUDIO)
# define IMG_INIT_FLAGS (IMG_INIT_PNG | IMG_INIT_JPG)

# include "./Library/includes/libft.h"
# include "./Library/includes/SDL.h"
# include "./Library/includes/SDL_image.h"
# include "./Library/includes/SDL_mixer.h"
# include "./Library/includes/SDL_ttf.h"

typedef struct		s_point
{
	int				x;
	int				y;
}					t_point;

typedef struct		s_sdlenv
{
	SDL_Window		*window;
	SDL_Renderer	*render;
	Mix_Music		*music;
	int				img:1;
	int				ttf:1;
	int				mixer:1;
}					t_sdlenv;

typedef struct		s_bline
{
	t_point			pi;
	t_point			pf;
	int				bold;
}					t_bline;

typedef struct		s_bcircle
{
	t_point			c;
	int			r;
	int			bold;
}			t_bcircle;

int					init_sdl(t_sdlenv env);
void				free_sdl(t_sdlenv *env);
void				init_sdlenv(t_sdlenv *env, int img, int ttf, int mixer);
int					fill_sdlenv(t_sdlenv *env, char *title, int height, int width);
SDL_Texture			*texture_img(SDL_Renderer *renderer, char *path_img);
int					load_music(t_sdlenv *env, char *path_music);
SDL_Rect			create_rect(int height, int width, int y, int x);
void				drawboldline_sdl(t_sdlenv env, SDL_Color color, t_bline boldline);
void				drawline_sdl(t_sdlenv env, SDL_Color color, t_point pi, t_point pf);
void				drawcircle_sdl(t_sdlenv env, SDL_Color color, t_point c, int r);
void				drawdisk_sdl(t_sdlenv env, SDL_Color color, t_point c, int r);
void				drawboldcircle_sdl(t_sdlenv env, SDL_Color color, t_bcircle boldcircle);
SDL_Color			setcolor_sdl(int r, int g, int b, int a);
t_bline				ft_setboldline(t_point pi, t_point pf, int bold);
t_bcircle			ft_setboldcircle(t_point c, int r, int bold);
t_point				ft_setpoint(int y, int x);

#endif
