# Project: Car Movement using Arrow Keys in OpenGL
# Makefile created by Embarcadero Dev-C++ 6.3

CPP      = g++.exe -D__DEBUG__
CC       = gcc.exe -D__DEBUG__
WINDRES  = windres.exe
OBJ      = "../Car\ Movement\ using\ Arrow\ Keys\ in\ OpenGL.o"
LINKOBJ  = "../Car Movement using Arrow Keys in OpenGL.o"
LIBS     = -L"C:/Program Files (x86)/Embarcadero/Dev-Cpp/TDM-GCC-64/lib" -L"C:/Program Files (x86)/Embarcadero/Dev-Cpp/TDM-GCC-64/x86_64-w64-mingw32/lib" -static-libgcc -lopengl32  -lfreeglut  -lglu32 -pg -g3
INCS     = -I"C:/Program Files (x86)/Embarcadero/Dev-Cpp/TDM-GCC-64/include" -I"C:/Program Files (x86)/Embarcadero/Dev-Cpp/TDM-GCC-64/x86_64-w64-mingw32/include" -I"C:/Program Files (x86)/Embarcadero/Dev-Cpp/TDM-GCC-64/lib/gcc/x86_64-w64-mingw32/9.2.0/include"
CXXINCS  = -I"C:/Program Files (x86)/Embarcadero/Dev-Cpp/TDM-GCC-64/include" -I"C:/Program Files (x86)/Embarcadero/Dev-Cpp/TDM-GCC-64/x86_64-w64-mingw32/include" -I"C:/Program Files (x86)/Embarcadero/Dev-Cpp/TDM-GCC-64/lib/gcc/x86_64-w64-mingw32/9.2.0/include" -I"C:/Program Files (x86)/Embarcadero/Dev-Cpp/TDM-GCC-64/lib/gcc/x86_64-w64-mingw32/9.2.0/include/c++"
BIN      = "hci klab.exe"
CXXFLAGS = $(CXXINCS) -pg -g3
CFLAGS   = $(INCS) -pg -g3
DEL      = C:\Program Files (x86)\Embarcadero\Dev-Cpp\devcpp.exe INTERNAL_DEL

.PHONY: all all-before all-after clean clean-custom

all: all-before $(BIN) all-after

clean: clean-custom
	${DEL} $(OBJ) $(BIN)

$(BIN): $(OBJ)
	$(CPP) $(LINKOBJ) -o $(BIN) $(LIBS)

"../Car\ Movement\ using\ Arrow\ Keys\ in\ OpenGL.o": ../Car\ Movement\ using\ Arrow\ Keys\ in\ OpenGL.cpp
	$(CPP) -c "../Car Movement using Arrow Keys in OpenGL.cpp" -o "../Car Movement using Arrow Keys in OpenGL.o" $(CXXFLAGS)
