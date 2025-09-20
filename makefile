CC = clang
CFLAGS = -Wall -Wextra -g

SRC = bai4_dequy_2
OUT = output

run: build
	./$(OUT)

build:
	$(CC) $(CFLAGS) $(SRC).c -o $(OUT)

clean:
	rm -f $(OUT) *~
