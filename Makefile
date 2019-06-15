# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: obelouch <OB-96@hotmail.com>               +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/06/14 20:33:38 by obelouch          #+#    #+#              #
#    Updated: 2019/06/15 16:18:25 by obelouch         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

GREEN = \033[1;32m
RED = \033[1;31m
EOC = \033[1;0m

LIBS_H = -I ./Library/includes/
LIBS_A = -L ./Library/lib/ -lSDL2 -lSDL2_image -lSDL2_ttf -lSDL2_mixer -lft\

NAME = libsdl.a

LIBSDL = create_rect fill_sdlenv free_sdl init_sdlenv load_music init_sdl texture_img\
		 ft_setpoint setcolor_sdl drawline_sdl drawcircle_sdl\

SRC = $(addprefix src/, $(addsuffix .c, $(LIBSDL)))

OBJ = $(addsuffix .o, $(LIBSDL))

FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
		@gcc -c $(SRC) $(FLAGS) -I.
		@ar rc $(NAME) $(OBJ)
		@echo "$(GREEN)"
	  	@echo "   _     _ _             _ _  "
		@echo "  | |   |_| |           | | | "
		@echo "  | |    _| |__  ___  __| | | "
		@echo "  | |   | |  _ \/ __|/ _  | | "
		@echo "  | |___| | |_| \__ \ |_| | | "
		@echo "  \_____/_|_.__/|___/\__,_|_| $(EOC)"
		@echo "by:$(RED) obelouch $(EOC) 2019"

clean:
		@/bin/rm -f $(OBJ)
		@echo "$(GREEN)Clean libsdl$(EOC)"

fclean: clean
		@/bin/rm -f $(NAME)
		@echo "$(RED)Remove libsdl.a :/$(EOC)"

re: fclean all
