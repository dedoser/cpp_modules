NAME = convert
SRCS = Converter.cpp main.cpp
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
