# Variables
CXX = g++                    # El compilador de C++
CXXFLAGS = -Wall -std=c++17  # Opciones de compilación
SRC = main.cpp               # Archivos fuente
TARGET = Exe_Program_3         # Nombre del ejecutable

# Regla principal
all: $(TARGET)

# Regla para compilar y enlazar directamente
$(TARGET): $(SRC)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SRC)

# Regla para limpiar el ejecutable
clean:
	rm -f $(TARGET)
