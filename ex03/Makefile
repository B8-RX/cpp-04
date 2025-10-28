SOURCES = main.cpp AMateria.cpp Cure.cpp Ice.cpp ICharacter.cpp

OBJECTS = $(SOURCES:.cpp=.o)

CXX = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98
# CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -MMD -MP

HEADERS = AMateria.hpp Cure.hpp Ice.hpp ICharacter.hpp

NAME = interface_and_recap

# DEPS = $(OBJECTS:.o=.d)

all: $(NAME)

%.o: %.cpp $(HEADERS)
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(NAME): $(OBJECTS)
	$(CXX) $(OBJECTS) -o $@

# -include $(DEPS)

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

