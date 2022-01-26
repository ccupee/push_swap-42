NAME			=		minishell
LIBFT_PATH		=		libft/
LIBFT			=		$(LIBFT_PATH)libft.a
SRC_PATH		=		src/
SRC 			= 		builtins/pwd/pwd.c		    builtins/env/env.c				builtins/export/export.c		\
						builtins/unset/unset.c		builtins/echo/echo.c			builtins/cd/cd.c				\
						builtins/cd/cd_utils.c      builtins/exit/exit.c			builtins/export/export_utils.c	\
						parse/parse_envs.c			parse/parse.c					parse/token_convers.c			\
						parse/parse_utils.c			parse/parse_init.c				parse/parse_handling.c			\
						parse/process_tokening.c	parse/token_amount.c			parse/token_create.c			\
						parse/split_commands.c		parse/parse_dollar.c			parse/get_commands.c			\
						parse/concat_commands.c		parse/preparse.c				parse/check_and_errors.c		\
						parse/quotes.c				parse/correct_env_case.c		parse/token_lst_utils.c			\
						parse/addon_token.c			parse/quotes_hand.c												\
						execute/bin_utils.c         execute/execute_bins.c	        execute/execute_builtins.c		\
						execute/execute_cmd.c       execute/execute_token.c	        execute/get_tokens.c			\
						execute/handle_path_var.c   execute/handle_redirects.c		execute/redirect_utils.c 		\
						utils/env_utils_1.c 		utils/env_utils_2.c				utils/get_next_line.c			\
						utils/check_env_syntax.c	utils/print_errno_error.c										\
						signals/signals.c			signals/signals_add.c											\
						errors/errors_1.c 			errors/errors_2.c												\
						main.c
OBJ 			=		$(patsubst %.c,%.o,$(addprefix $(SRC_PATH),$(SRC)))
D_FILES 		=		$(patsubst %.c,%.d,$(addprefix $(SRC_PATH),$(SRC)))
OPTFLAGS 		=		-O2
CFLAGS 			= 		-Wall -Wextra -Werror
LFLAGS			=		-L/usr/local/opt/readline/lib
HFLAGS			=		-I/usr/local/opt/readline/include


all 			: 		$(LIBFT) $(NAME)

$(LIBFT)		:
						make -s -C $(LIBFT_PATH)

$(NAME)		 	:		$(OBJ)
						gcc $(CFLAGS) $(LFLAGS) $(HFLAGS) $(OPTFLAGS) -lreadline -L$(LIBFT_PATH) -lft $(OBJ) -o $(NAME)
						@echo "minishell is ready to launch"

%.o 			: 		%.c
						gcc $(CFLAGS) $(OPTFLAGS) -c $< -o $@ -MD

include $(wildcard $(D_FILES))

clean 			: 
						@make -C $(LIBFT_PATH) clean
						@rm -f $(OBJ) $(D_FILES)

fclean 			: 		clean
						@make -C $(LIBFT_PATH) fclean
						@rm -f $(NAME)

re 				: 		fclean all

.PHONY			: 		all clean fclean re