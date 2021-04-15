PROJ_NAME = Crypto_what
TEST_PROJ_NAME = Test_$(PROJ_NAME)

BUILD_DIR = Build

SRC = src/caesar.c

TEST_SRC = test/test_crypto.c\
unity/unity.c

INC = -Iinc\
 -Iunity

 .PHONY: all test coverage clean

all: $(BUILD_DIR)
	gcc main.c $(SRC) $(INC) -o $(BUILD_DIR)/$(PROJ_NAME).exe

run: all
	$(BUILD_DIR)/$(PROJ_NAME).exe

test: $(SRC) $(TEST_SRC) $(BUILD_DIR)
	gcc $(SRC) $(TEST_SRC) $(INC) -o $(BUILD_DIR)/$(TEST_PROJ_NAME).exe
	$(BUILD_DIR)/$(TEST_PROJ_NAME).exe

coverage:${PROJECT_NAME}
	gcc -fprofile-arcs -ftest-coverage $(SRC) $(INC) -o $(BUILD_DIR)/$(TEST_PROJ_NAME).exe
	$(BUILD_DIR)/$(TEST_PROJ_NAME).exe
	gcov -a $(SRC)

$(BUILD_DIR):
	mkdir $(BUILD_DIR)


clean:
	del *.exe
	del /q $(BUILD_DIR)
	rmdir $(BUILD_DIR)