# ▄▄▄▄▄▄▄▄▄▄▄▄▄▄ NAMES ▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄#

NAME		= push_swap
# NAME_BONUS		= push_swap_bonus

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

# SRC_DIR_BONUS 	= src_bonus/
# OBJ_DIR_BONUS 	= obj_bonus/
# UTILS_DIR_BONUS	= utils_bonus/

# ▄▄▄▄▄▄▄▄▄▄▄▄▄▄ SOURCES ▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄#

LIBSFT = $(LIBFT_DIR)libft.a

MAIN_FILES	=	main
UTILS_FILES	= init ctrl push swap rotate reverse
ORDER_FILES = quick_sort

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

# MAIN_FILES_BONUS	=	main_bonus
# UTILS_FILES_BONUS	= errors_bonus render_map_bonus load_img_bonus \
# ctrl_map_bonus player_bonus ctrl_move_bonus ctrl_path_bonus header_bonus \
# reload_bonus put_img_bonus mom_bonus game_over_bonus movie_bonus \
# intro_mov_bonus

# SRC_MAIN_FILES_BONUS	+=$(MAIN_FILES_BONUS)
# SRC_UTILS_FILES_BONUS	+=$(addprefix $(UTILS_DIR_BONUS),$(UTILS_FILES_BONUS))

# SRCS_MAIN_BONUS = $(addprefix $(SRC_DIR_BONUS), $(addsuffix .c, $(SRC_MAIN_FILES_BONUS)))
# OBJS_MAIN_BONUS = $(addprefix $(OBJ_DIR_BONUS), $(addsuffix .o, $(SRC_MAIN_FILES_BONUS)))
# DEPS_MAIN_BONUS = $(addprefix $(OBJ_DIR_BONUS), $(addsuffix .d, $(SRC_MAIN_FILES_BONUS)))
# SRCS_UTILS_BONUS = $(addprefix $(SRC_DIR_BONUS), $(addsuffix .c, $(SRC_UTILS_FILES_BONUS)))
# OBJS_UTILS_BONUS = $(addprefix $(OBJ_DIR_BONUS), $(addsuffix .o, $(SRC_UTILS_FILES_BONUS)))
# DEPS_UTILS_BONUS = $(addprefix $(OBJ_DIR_BONUS), $(addsuffix .d, $(SRC_UTILS_FILES_BONUS)))

# ▄▄▄▄▄▄▄▄▄▄▄▄▄▄ RULES ▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄#

$(OBJ_DIR)%.o : $(SRC_DIR)%.c
			@$(MKDIR) $(dir $@)
			@echo "$(ORANGE) Creado objeto de  ➟  $(BLUE)$< $(WHITE)"
			@$(CC) -MMD -MP $(CFLAGS) -I $(INCLUDES) -c $< -o $@

# $(OBJ_DIR_BONUS)%.o : $(SRC_DIR_BONUS)%.c
# 			@$(MKDIR) $(dir $@)
# 			@echo "$(ORANGE) Compilando objetos  ➟  $(BLUE)$< $(WHITE)"
# 			@$(CC) -MMD -MP $(CFLAGS) -I $(INCLUDES) -c $< -o $@

all: LIBFS $(NAME)

# bonus: LIBFS $(NAME_BONUS)

LIBFS:
			@make -C $(LIBFT_DIR)

$(NAME):	$(OBJS_MAIN) $(OBJS_UTILS) $(OBJS_ORDER)
			@$(CC) $(CFLAGS) $(LIBSFT) $^ -o $@
			@echo "$(ORANGE) Compilando Ejecutable  ➟  $(RED)$@ $(WHITE)"

# $(NAME_BONUS):	$(OBJS_MAIN_BONUS) $(OBJS_UTILS_BONUS)
# 			@$(CC) $(CFLAGS)  $(LIBSFT) $^ -o $@
# 			@echo "$(ORANGE) Compilando Ejecutable  ➟  $(RED)$@ $(WHITE)"

clean :
			@make fclean -s -C $(LIBFT_DIR)
			@$(RM) $(OBJ_DIR)
			@$(RM) $(OBJ_DIR_BONUS)
			@echo "$(RED)\n ✗ Archivos objetos push_swap borrados.‼️\n$(WHITE)";

fclean : clean
			@$(RM) $(NAME)
			@$(RM) $(NAME_BONUS)
			@echo "$(GREEN) Todo Super limpito...✌🏼 $(WHITE)" 

re: fclean all
			@echo "$(YELLOW) Borrado todo y recompilado...✌🏼$(WHITE)"

# reb: fclean bonus
# 			@echo "$(YELLOW) Borrado todo y recompilado...✌🏼$(WHITE)"

norm:
# @norminette $(SRCS_MAIN) $(SRCS_UTILS) $(INCLUDES) | grep -v Norme -B1 || true
			@norminette $(SRC_DIR) | grep -v Norme -B1 || true

# norm_bonus:
# 			@norminette $(SRCS_MAIN_BONUS) $(SRCS_UTILS_BONUS) $(INCLUDES) | grep -v Norme -B1 || true

-include $(DEPS)

# ▄▄▄▄▄▄▄▄▄▄▄▄▄▄ Non-file targets ▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄#

.PHONY: all clean fclean re norm bonus norm_bonus
