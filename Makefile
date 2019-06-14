# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: obelouch <OB-96@hotmail.com>               +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/06/14 20:33:38 by obelouch          #+#    #+#              #
#    Updated: 2019/06/14 20:50:05 by obelouch         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

GREEN = \033[1;32m
RED = \033[1;31m
EOC = \033[1;0m

LIB_SDL = -L ./SDL_lib/ -lSDL2 -lSDL2_image -lSDL2_ttf -lSDL2_mixer\

NAME = libsdl.a

LIBSDL_SRC = create_rect fill_sdlenv free_sdl init_sdlenv load_music init_sdl texture_img\

SRC = $(addprefix src/, $(addsuffix .c, $(LIBSDL_SRC)))

OBJ = $(addsuffix .o, $(DISPLAYER_SRC))

FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
		@gcc -c -I ./ $(SRC) $(FLAGS)
		@ar rc $(NAME) $(OBJ)
		@echo "$(GREEN)"
	  	@echo "   _     _ _             _ _  "
		@echo "  | |   (_) |           | | | "
		@echo "  | |    _| |__  ___  __| | | "
		@echo "  | |   | | '_ \/ __|/ _` | | "
		@echo "  | |___| | |_) \__ \ (_| | | "
		@echo "  \_____/_|_.__/|___/\__,_|_| $(EOC)"
		@echo "by:$(RED) obelouch $(EOC) 2019"

clean:
		@/bin/rm -f $(OBJ)
		@echo "$(GREEN)Clean libsdl$(EOC)"

fclean: clean
		@/bin/rm -f $(NAME)
		@echo "$(RED)Remove libsdl.a :/$(EOC)"

re: fclean all
