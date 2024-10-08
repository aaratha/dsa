# Compiler
CXX = clang++

# Include directories
INCLUDES = -I. -I/opt/homebrew/include

# Library directories
LIBDIRS = -L/opt/homebrew/lib

# Compiler flags
CXXFLAGS = -std=c++17 $(INCLUDES)

# Linker flags (including GLFW and Vulkan)
# Added explicit RPATH setting for both Vulkan SDK lib directory
LDFLAGS = $(LIBDIRS)
# Source files
SRCS = *.cpp

# Output executable
TARGET = a.out

# Build target
all: clean $(TARGET)

$(TARGET): $(SRCS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SRCS) $(LDFLAGS)

# Run the application
run: $(TARGET)
	/$(TARGET)

# Clean up
clean:
	rm -f $(TARGET)
