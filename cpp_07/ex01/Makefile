# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fignigno <fignigno@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/04 17:23:58 by fignigno          #+#    #+#              #
#    Updated: 2021/05/04 17:24:12 by fignigno         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = iter
SRCS = main.cpp
OBJS = $(SRCS:.cpp=.o)
CLANG = clang++ -Wall -Werror -Wextra -std=c++98

all: $(NAME)

$(NAME): $(OBJS)
	$(CLANG) $(OBJS) -o $(NAME)

$(OBJS): %.o : %.cpp
	$(CLANG) -c $< -o $@

clean:
	rm -rf $(OBJS) $(NAME)

re: clean all

.PHONY: all, re, clean
