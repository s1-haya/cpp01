NAME := BraiiiiiiinnnzzzZ
CXX := c++
CXXFLAGS := -Wall -Wextra -Werror -std=c++98 -MMD -MP
# CXXFLAGS += -pedantic-errors

SRCS := main.cpp \
		HumanA.cpp \
		HumanB.cpp \
		Weapon.cpp \

OBJS := $(SRCS:%.cpp=%.o)

DEPS := $(OBJS:%.o=%.d)

INCLUDES := -I.

.PHONY: all clean fclean re

all: $(NAME)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) $(INCLUDES) -c $< -o $@ 

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) $(INCLUDES) -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

-include $(DEPS)
