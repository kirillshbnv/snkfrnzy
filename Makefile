# Compiler and Flags
CC = cc68x
CFLAGS = -Iinclude -O

# Paths
SRCDIR = src
OBJDIR = obj
INCDIR = include

# Target
TARGET = snkfrnzy.prg

# Object Files
OBJS = $(OBJDIR)\main.o \
       $(OBJDIR)\events.o \
       $(OBJDIR)\model.o \
       $(OBJDIR)\raster.o

# Default Rule
all: $(TARGET)

# Link Target
$(TARGET): $(OBJS)
	$(CC) -o $(TARGET) $(OBJS)

# Compile Rules
$(OBJDIR)\main.o: $(SRCDIR)\main.c $(INCDIR)\globals.h
	$(CC) $(CFLAGS) -c $(SRCDIR)\main.c -o $@

$(OBJDIR)\events.o: $(SRCDIR)\events.c $(INCDIR)\events.h
	$(CC) $(CFLAGS) -c $(SRCDIR)\events.c -o $@

$(OBJDIR)\model.o: $(SRCDIR)\model.c $(INCDIR)\model.h
	$(CC) $(CFLAGS) -c $(SRCDIR)\model.c -o $@

$(OBJDIR)\raster.o: $(SRCDIR)\raster.c $(INCDIR)\raster.h
	$(CC) $(CFLAGS) -c $(SRCDIR)\raster.c -o $@

# Clean Rule
clean:
	source clean.g