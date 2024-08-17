# Compiler
CXX = g++

# Compiler flags
CXXFLAGS = -Wall -Wextra -std=c++17 -IC:/raylib/include -g

# Linker flags
LDFLAGS = -LC:/raylib/lib -lraylib -lopengl32 -lgdi32 -lwinmm -lpsapi -ldxguid

# Source files
SRCS = main.cpp Character.cpp Prop.cpp Enemy.cpp BaseCharacter.cpp

# Output executable
OUT = main.exe

# Build target
all: $(OUT)

$(OUT): $(SRCS)
	$(CXX) $(CXXFLAGS) -o $(OUT) $(SRCS) $(LDFLAGS)

# Clean target
clean:
	del /Q $(OUT)
	del /Q *.o

.PHONY: all clean