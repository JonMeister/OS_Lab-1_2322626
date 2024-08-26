# Variables
CC = gcc
CFLAGS = -Wall
BINDIR = executables

# Archivos fuente
SOURCES = Program_1_1.c Program_1_2.c Program_1_3.c Program_1_4.c Program_1_5.c \
          Program_1_6_and_1_7.c Program_1_8.c Program_1_9.c Program_1_10.c Program_2.c

# Ejecutables
TARGETS = 1_1_LeapYear 1_2_Factorial 1_3_Power 1_4_EvenOrOdd 1_5_Fibonacci \
          1_6_and_1_7_UpperOrLowerCase 1_8_LargestOf3 1_9_TypeCasting \
          1_10_OctalDecimalHexadecimal 2_ClassGrades

# Regla principal para compilar todos los ejecutables
all: $(addprefix $(BINDIR)/, $(TARGETS))

# Crear el directorio de salida si no existe
$(BINDIR):
	mkdir -p $(BINDIR)

# Reglas para compilar cada ejecutable
$(BINDIR)/1_1_LeapYear: Program_1_1.c | $(BINDIR)
	$(CC) $(CFLAGS) -o $(BINDIR)/1_1_LeapYear Program_1_1.c

$(BINDIR)/1_2_Factorial: Program_1_2.c | $(BINDIR)
	$(CC) $(CFLAGS) -o $(BINDIR)/1_2_Factorial Program_1_2.c

$(BINDIR)/1_3_Power: Program_1_3.c | $(BINDIR)
	$(CC) $(CFLAGS) -o $(BINDIR)/1_3_Power Program_1_3.c

$(BINDIR)/1_4_EvenOrOdd: Program_1_4.c | $(BINDIR)
	$(CC) $(CFLAGS) -o $(BINDIR)/1_4_EvenOrOdd Program_1_4.c

$(BINDIR)/1_5_Fibonacci: Program_1_5.c | $(BINDIR)
	$(CC) $(CFLAGS) -o $(BINDIR)/1_5_Fibonacci Program_1_5.c

$(BINDIR)/1_6_and_1_7_UpperOrLowerCase: Program_1_6_and_1_7.c | $(BINDIR)
	$(CC) $(CFLAGS) -o $(BINDIR)/1_6_and_1_7_UpperOrLowerCase Program_1_6_and_1_7.c

$(BINDIR)/1_8_LargestOf3: Program_1_8.c | $(BINDIR)
	$(CC) $(CFLAGS) -o $(BINDIR)/1_8_LargestOf3 Program_1_8.c

$(BINDIR)/1_9_TypeCasting: Program_1_9.c | $(BINDIR)
	$(CC) $(CFLAGS) -o $(BINDIR)/1_9_TypeCasting Program_1_9.c

$(BINDIR)/1_10_OctalDecimalHexadecimal: Program_1_10.c | $(BINDIR)
	$(CC) $(CFLAGS) -o $(BINDIR)/1_10_OctalDecimalHexadecimal Program_1_10.c

$(BINDIR)/2_ClassGrades: Program_2.c | $(BINDIR)
	$(CC) $(CFLAGS) -o $(BINDIR)/2_ClassGrades Program_2.c

# Regla para limpiar todos los ejecutables
clean:
	rm -f $(BINDIR)/*



