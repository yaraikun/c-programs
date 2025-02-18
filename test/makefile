CC = gcc
INC = -Iinclude
CFLAGS = -Wall -Wextra $(INC)

SRC_DIR = src
OBJ_DIR = obj
BIN_DIR = bin

SRC = $(wildcard $(SRC_DIR)/*.c)
OBJ = $(SRC:$(SRC_DIR)/%.c=$(OBJ_DIR)/%.o)
BIN = $(BIN_DIR)/a.exe

.PHONY: run
all: $(BIN)
	@echo -n "Run? (y/n): " && \
	read answer && \
	if [ "$$answer" == "y" ]; \
	then ./$(BIN) \
	else echo "Skipping run."; \
	fi

$(BIN): $(OBJ) | $(BIN_DIR)
	@echo "Linking..."
	@$(CC) $^ -o $@

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c | $(OBJ_DIR)
	@echo "Compiling $<..."
	@$(CC) $(CFLAGS) -c $^ -o $@

$(OBJ_DIR):
	@echo "Creating obj directory..."
	@mkdir -p "obj"

$(BIN_DIR):
	@echo "Creating bin directory..."
	@mkdir -p "bin"

.PHONY: clean
clean:
	@echo "Cleaning up object files..."
	@rm -rf "$(OBJ_DIR)/*.o"
	@echo "Cleaning up executable files..."
	@rm -rf "$(BIN_DIR)/*.exe"
	@echo "Cleaning up empty directories..."
	@rm -rf "$(OBJ_DIR)" "$(BIN_DIR)"