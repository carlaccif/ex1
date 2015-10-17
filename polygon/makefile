OBJ = driver.o polygon.o
SRC = $(OBJ:.o=.c)
TARGET = driver
INC = polygon.h
LIB = ../graphic/curse.o ../point/point.o

$(TARGET) :  $(OBJ)
	gcc  $(OBJ) $(LIB) -o $(TARGET) 

$(OBJ) : $(INC)

.c.o:
	gcc -c $< -o $@
