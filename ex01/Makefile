# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tberube- <tberube-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/09 09:09:34 by tberube-          #+#    #+#              #
#    Updated: 2023/05/08 14:11:25 by tberube-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			= phonebook

SOURCE			= main.cpp Contact.cpp PhoneBook.cpp

#HEADERS			= 	Phonebook.hpp Contact.hpp

OBJECT			=	$(SOURCE:.cpp=.o)

COMPILE			= 	clang++

FLAGS			= 	-Wall -Wextra -Werror -std=c++98

RESET			= 	\033[0m
GREEN 			= 	\033[38;5;46m
WHITE 			= 	\033[38;5;15m
GREY 			= 	\033[38;5;8m
ORANGE 			= 	\033[38;5;202m
RED 			= 	\033[38;5;160m
CYAN 			= 	\033[0;36m
MAGENTA 		=	\033[0;35m

all: $(NAME)

%.o: %.cpp #$(HEADERS)
	@echo "$(GREY)Compiling...				$(WHITE)$<"
	@$(COMPILE) $(FLAGS) -c $< -o $@

$(NAME): $(OBJECT)
	@echo "$(GREEN)----------------------------------------------------"
	@$(COMPILE) $(FLAGS) $(OBJECT) -o $(NAME)
	@echo "Executable				./$(NAME) $(RESET)"

clean:
	@echo "$(RED)----------------------------------------------------"
	@/bin/rm -f $(OBJECT)
	@echo "$(WHITE)REMOVED O-FILES $(RESET)"

fclean: clean
	@echo "$(RED)----------------------------------------------------"
	@/bin/rm -f $(NAME)
	@echo "$(WHITE)REMOVED EXECUTABLE FILE $(RESET)"

re: fclean all

.PHONY: all clean fclean re