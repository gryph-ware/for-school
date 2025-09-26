cc = clang
flags = -Wall -Wextra -g
src = bai1_1-c
target = out

all: $(target)

$(target): $(src)
	$(cc) $(flags) $(src).c -o $(target)

run:
	./$(target)

clear:
	rm -f *~ $(src) $(target)
