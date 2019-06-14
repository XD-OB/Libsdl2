/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libsdl.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <OB-96@hotmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/14 18:29:53 by obelouch          #+#    #+#             */
/*   Updated: 2019/06/14 20:32:42 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBSDL_H
# define LIBSDL_H

# define SDL_INIT_FLAGS	(SDL_INIT_VIDEO | SDL_INIT_AUDIO)
# define IMG_INIT_FLAGS (IMG_INIT_PNG | IMG_INIT_JPG)

# include "SDL.h"
# include "SDL_image.h"
# include "SDL_mixer.h"
# include "SDL_ttf"

typedef struct		s_sdlenv
{
	SDL_Window		*window;
	SDL_Renderer	*render;
	Mix_Music		*music;
	int				img:1;
	int				ttf:1;
	int				mixer:1;
}					t_sdlenv;

int					init_sdl(t_sdlenv env);
void				free_sdl(t_sdlenv *env);
void				init_sdlenv(t_sdlenv *env, int img, int ttf, int mixer);
int					fill_sdlenv(t_sdlenv *env, char *title, int height, int width);
SDL_Texture			*texture_img(SDL_Renderer *renderer, char *path_img);
int					load_music(t_sdlenv *env, char *path_music);
SDL_Rect			create_rect(int height, int width, int y, int x);

#endif
