clear
c++ -O0 -g -std=c++98 -Wall -Werror -Wextra *.cpp
valgrind ./a.out
#valgrind -v --show-reachable=yes --leak-check=full ./a.out
./a.out
rm a.out