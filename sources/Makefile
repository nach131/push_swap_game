# ▄▄▄▄▄▄▄▄▄▄▄▄▄▄ NAMES ▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄#

NAME		= push_swap
NAME_BONUS		= checker
NAME_GAME		= game

# ▄▄▄▄▄▄▄▄▄▄▄▄▄▄ COLORS ▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄#

GREEN		=\033[0;32m
BLUE 		=\033[0;34m
ORANGE	=\033[38;5;214m
RED			=\033[0;31m
YELLOW	=\033[0;33m
WHITE		=\033[0;37m

# ▄▄▄▄▄▄▄▄▄▄▄▄▄▄ COMPILATE ▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄#

CC			= gcc
AR 			= ar -rcs
RM			= rm -rf
MKDIR		= -mkdir -p
CFLAGS	= -Wall -Wextra -Werror -g3

# ▄▄▄▄▄▄▄▄▄▄▄▄▄▄ DIRECTORIES ▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄#

LIBFT_DIR = libft/
INCLUDES 	= inc/
SRC_DIR 	= src/
OBJ_DIR 	= obj/
UTILS_DIR	= utils/
ORDER_DIR = order/

# ▖▖▖▖▖▖▖▖▖▖▖▖▖▖ BONUS ▖▖▖▖▖▖▖▖▖▖▖▖▖▖▖▖▖▖▖▖▖▖▖▖▖▖▖▖▖▖▖▖▖▖▖▖▖▖▖▖▖▖▖▖▖▖▖▖▖▖▖▖▖▖▖#

SRC_DIR_BONUS 	= src_bonus/
OBJ_DIR_BONUS 	= obj_bonus/
UTILS_DIR_BONUS	= utils_bonus/

# ▪▪▪▪▪▪▪▪▪▪▪▪▪ GAME ▪▪▪▪▪▪▪▪▪▪▪▪▪▪▪▪▪▪▪▪▪▪▪▪▪▪▪▪▪▪▪▪▪▪▪▪▪▪▪▪▪▪▪▪▪▪▪▪▪▪▪▪▪▪▪▪▪▪#

SRC_DIR_GAME 	= src_game/
OBJ_DIR_GAME 	= obj_game/
UTILS_DIR_GAME	= utils_game

# ▄▄▄▄▄▄▄▄▄▄▄▄▄▄ SOURCES ▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄#

LIBSFT = $(LIBFT_DIR)libft.a

MAIN_FILES	=	main
UTILS_FILES	= ctrl init stack swap rotate reverse push stack_utl tp chunks
ORDER_FILES = quick_sort selection sort_three sort_five pop_biggest push_biggest

SRC_MAIN_FILES	+=$(MAIN_FILES)
SRCS_MAIN = $(addprefix $(SRC_DIR), $(addsuffix .c, $(SRC_MAIN_FILES)))
OBJS_MAIN = $(addprefix $(OBJ_DIR), $(addsuffix .o, $(SRC_MAIN_FILES)))
DEPS_MAIN = $(addprefix $(OBJ_DIR), $(addsuffix .d, $(SRC_MAIN_FILES)))

SRC_UTILS_FILES	+=$(addprefix $(UTILS_DIR),$(UTILS_FILES))
SRCS_UTILS = $(addprefix $(SRC_DIR), $(addsuffix .c, $(SRC_UTILS_FILES)))
OBJS_UTILS = $(addprefix $(OBJ_DIR), $(addsuffix .o, $(SRC_UTILS_FILES)))
DEPS_UTILS = $(addprefix $(OBJ_DIR), $(addsuffix .d, $(SRC_UTILS_FILES)))

SRC_ORDER_FILES	+=$(addprefix $(ORDER_DIR),$(ORDER_FILES))
SRCS_ORDER = $(addprefix $(SRC_DIR), $(addsuffix .c, $(SRC_ORDER_FILES)))
OBJS_ORDER = $(addprefix $(OBJ_DIR), $(addsuffix .o, $(SRC_ORDER_FILES)))
DEPS_ORDER = $(addprefix $(OBJ_DIR), $(addsuffix .d, $(SRC_ORDER_FILES)))

# ▖▖▖▖▖▖▖▖▖▖▖▖▖▖ BONUS ▖▖▖▖▖▖▖▖▖▖▖▖▖▖▖▖▖▖▖▖▖▖▖▖▖▖▖▖▖▖▖▖▖▖▖▖▖▖▖▖▖▖▖▖▖▖▖▖▖▖▖▖▖▖▖#

MAIN_FILES_BONUS	=	main_bonus
UTILS_FILES_BONUS	= ctrl_bonus init_bonus stack_bonus swap_bonus push_bonus \
 rotate_bonus reverse_bonus
 
SRC_MAIN_FILES_BONUS	+=$(MAIN_FILES_BONUS)
SRC_UTILS_FILES_BONUS	+=$(addprefix $(UTILS_DIR_BONUS),$(UTILS_FILES_BONUS))

SRCS_MAIN_BONUS = $(addprefix $(SRC_DIR_BONUS), $(addsuffix .c, $(SRC_MAIN_FILES_BONUS)))
OBJS_MAIN_BONUS = $(addprefix $(OBJ_DIR_BONUS), $(addsuffix .o, $(SRC_MAIN_FILES_BONUS)))
DEPS_MAIN_BONUS = $(addprefix $(OBJ_DIR_BONUS), $(addsuffix .d, $(SRC_MAIN_FILES_BONUS)))
SRCS_UTILS_BONUS = $(addprefix $(SRC_DIR_BONUS), $(addsuffix .c, $(SRC_UTILS_FILES_BONUS)))
OBJS_UTILS_BONUS = $(addprefix $(OBJ_DIR_BONUS), $(addsuffix .o, $(SRC_UTILS_FILES_BONUS)))
DEPS_UTILS_BONUS = $(addprefix $(OBJ_DIR_BONUS), $(addsuffix .d, $(SRC_UTILS_FILES_BONUS)))

# ▪▪▪▪▪▪▪▪▪▪▪▪▪ GAME ▪▪▪▪▪▪▪▪▪▪▪▪▪▪▪▪▪▪▪▪▪▪▪▪▪▪▪▪▪▪▪▪▪▪▪▪▪▪▪▪▪▪▪▪▪▪▪▪▪▪▪▪▪▪▪▪▪▪#

MAIN_FILES_GAME	=	main_game
UTILS_FILES_GAME	= 
 
SRC_MAIN_FILES_GAME	+=$(MAIN_FILES_GAME)
SRC_UTILS_FILES_GAME	+=$(addprefix $(UTILS_DIR_GAME),$(UTILS_FILES_GAME))

SRCS_MAIN_GAME = $(addprefix $(SRC_DIR_GAME), $(addsuffix .c, $(SRC_MAIN_FILES_GAME)))
OBJS_MAIN_GAME = $(addprefix $(OBJ_DIR_GAME), $(addsuffix .o, $(SRC_MAIN_FILES_GAME)))
DEPS_MAIN_GAME = $(addprefix $(OBJ_DIR_GAME), $(addsuffix .d, $(SRC_MAIN_FILES_GAME)))
SRCS_UTILS_GAME = $(addprefix $(SRC_DIR_GAME), $(addsuffix .c, $(SRC_UTILS_FILES_GAME)))
OBJS_UTILS_GAME = $(addprefix $(OBJ_DIR_GAME), $(addsuffix .o, $(SRC_UTILS_FILES_GAME)))
DEPS_UTILS_GAME = $(addprefix $(OBJ_DIR_GAME), $(addsuffix .d, $(SRC_UTILS_FILES_GAME)))

# ▄▄▄▄▄▄▄▄▄▄▄▄▄▄ RULES ▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄#

$(OBJ_DIR)%.o : $(SRC_DIR)%.c
			@$(MKDIR) $(dir $@)
			@echo "$(ORANGE) Creado objeto de  ➟  $(BLUE)$< $(WHITE)"
			@$(CC) -MMD -MP $(CFLAGS) -I $(INCLUDES) -c $< -o $@

$(OBJ_DIR_BONUS)%.o : $(SRC_DIR_BONUS)%.c
			@$(MKDIR) $(dir $@)
			@echo "$(ORANGE) Compilando objetos  ➟  $(BLUE)$< $(WHITE)"
			@$(CC) -MMD -MP $(CFLAGS) -I $(INCLUDES) -c $< -o $@

$(OBJ_DIR_GAME)%.o : $(SRC_DIR_GAME)%.c
			@$(MKDIR) $(dir $@)
			@echo "$(ORANGE) Compilando objetos  ➟  $(BLUE)$< $(WHITE)"
			@$(CC) -MMD -MP $(CFLAGS) -I $(INCLUDES) -c $< -o $@

all: LIBFS $(NAME)

bonus: LIBFS $(NAME_BONUS)

game: $(NAME_GAME)

LIBFS:
			@make -C $(LIBFT_DIR)

$(NAME):	$(OBJS_MAIN) $(OBJS_UTILS) $(OBJS_ORDER)
			@$(CC) $(CFLAGS) $(LIBSFT) $^ -o $@
			@echo "$(ORANGE) Compilando Ejecutable  ➟  $(RED)$@ $(WHITE)"

$(NAME_BONUS):	$(OBJS_MAIN_BONUS) $(OBJS_UTILS_BONUS)
			@$(CC) $(CFLAGS)  $(LIBSFT) $^ -o $@
			@echo "$(ORANGE) Compilando Ejecutable  ➟  $(RED)$@ $(WHITE)"

$(NAME_GAME):	$(OBJS_MAIN_GAME) $(OBJS_UTILS_GAME)
			@$(CC) $(CFLAGS)  $(LIBSFT) $^ -o $@
			@echo "$(ORANGE) Compilando Ejecutable  ➟  $(RED)$@ $(WHITE)"

clean :
			@make fclean -s -C $(LIBFT_DIR)
			@$(RM) $(OBJ_DIR)
			@$(RM) $(OBJ_DIR_BONUS)
			@echo "$(RED)\n ✗ Archivos objetos push_swap borrados.‼️\n$(WHITE)";

fclean : clean
			@$(RM) $(NAME)
			@$(RM) $(NAME_BONUS)
			@$(RM) $(NAME_GAME)
			@echo "$(GREEN) Todo Super limpito...✌🏼 $(WHITE)" 

re: fclean all
			@echo "$(YELLOW) Borrado todo y recompilado...✌🏼$(WHITE)"

reb: fclean bonus
			@echo "$(YELLOW) Borrado todo y recompilado...✌🏼$(WHITE)"

reg: fclean game
			@echo "$(YELLOW) Borrado todo y recompilado...✌🏼$(WHITE)"

norm:
			@norminette $(SRC_DIR) | grep -v Norme -B1 || true

norm_bonus:
			@norminette $(SRCS_MAIN_BONUS) $(SRCS_UTILS_BONUS) $(INCLUDES) | grep -v Norme -B1 || true

-include $(DEPS)

# ▄▄▄▄▄▄▄▄▄▄▄▄▄▄ Non-file targets ▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄#

.PHONY: all clean fclean re norm bonus norm_bonus game
