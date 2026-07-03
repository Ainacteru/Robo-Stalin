CC = gcc
CFLAGS = -Wall -Wextra -Iinclude

NETWORK_DEPS := -lwebsockets -lssl -lcrypto -lpthread
DEPS := -lcurl $(NETWORK_DEPS)

BUILD := build
BUILD_OBJS := $(BUILD)/obj

SRCS := $(shell find src -name "*.c")
OBJS := $(patsubst src/%.c, $(BUILD_OBJS)/%.o, $(SRCS))

OUT = Robo-Stalin

$(OUT): $(OBJS) 
	mkdir -p $(BUILD_OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $@ $(DEPS) 

$(BUILD_OBJS)/%.o: src/%.c 
	mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(BUILD)
	rm -rf $(OUT)
