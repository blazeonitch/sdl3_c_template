CC = gcc
CXXFLAGS = -std=c++11 -I"D:/Libraries/vcpkg/installed/x64-mingw-dynamic/include"
LDFLAGS = -L"D:/Libraries/vcpkg/installed/x64-mingw-dynamic/lib" -lSDL3
TARGET = main

all: $(TARGET)

$(TARGET): main.c
	$(CXX) $(CXXFLAGS) $^ $(LDFLAGS) -o $@

clean:
	rm -f $(TARGET).exe

