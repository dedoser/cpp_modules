# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fignigno <fignigno@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/04 17:45:33 by fignigno          #+#    #+#              #
#    Updated: 2021/05/04 18:43:11 by fignigno         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = array
SRCS = main.cpp
OBJS = $(SRCS:.cpp=.o)
HEADERS = Array.hpp
CLANG = clang++ -Wall -Werror -Wextra -std=c++98 -g

all: $(NAME)

$(NAME): $(OBJS)
	$(CLANG) $(OBJS) -o $(NAME)

$(OBJS): %.o : %.cpp $(HEADERS)
	$(CLANG) -c $< -o $@

clean:
	rm -rf $(OBJS) $(NAME)

re: clean all

.PHONY: all, re, clean
