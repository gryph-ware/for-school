CC = clang
CFLAGS = -Wall -Wextra -g

SRC = bai2_dequy
OUT = output

run: build
	./$(OUT)

build:
	$(CC) $(CFLAGS) $(SRC).c -o $(OUT)

clean:
	rm -f $(OUT)
