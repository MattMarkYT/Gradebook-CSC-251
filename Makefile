NAME		:= gradebook
CC			:= gcc
SOURCES		:= $(shell find -L $(SOURCEDIRS) -name "*.c")

.PHONY: build

build:
	$(CC) -o $(NAME) $(SOURCES)