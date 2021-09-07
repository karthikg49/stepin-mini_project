# Name of the project
PROJECT_NAME = Personal_Diary_Management_System

# Output directory
BUILD = build

# All source code files
SRC = src/dairy.c\

# All include folders with header files
INC = -Iinc\
-Iunity

ifdef OS
   RM = del /q
   FixPath = $(subst /,\,$1)
   EXEC = exe
else
   ifeq ($(shell uname), Linux)
      RM = rm -rf
      FixPath = $1
          EXEC = out
   endif
endif

all: $(SRC) $(BUILD)
	gcc $(SRC) $(INC) -o build/Final_output.exe 

run:
	./build/Final_output.exe

