FLTK:=$(shell fltk-config --version)
CC:=g++
CFLAGS:=-std=c++11
OPP1S:=./oblig2_oppgave1/src/
OPP1B:=./oblig2_oppgave1/bin/
OPP1BIN:=fireworks
OPP2S:=./oblig2_oppgave2/src/
OPP2B:=./oblig2_oppgave2/bin/
OPP2BIN:=fireworks2


ifndef FLTK
$(error "FLTK is missing ono your system")
endif

#Dersom man har fltk er det mulig å spørre fltk om hvilke flagger som skal brukes i kompileringen
LDOPTS:=$(shell fltk-config --ldflags)

all: info

info:
	@echo "Found FLTK version: " $(FLTK)
	@echo "Compiling with: " $(LDOPTS)
	@echo "Parameter sendt in: " $(PARAM1)
	#Sender til default rule dersom det mangler parametre
	$(MAKE) fireworks

fireworks:
	@echo "Building oppgave 1"
	$(CC) $(CFLAGS) -c $(OPP1S)has_color.cpp $(OPP1S)is_vector.cpp $(OPP1S)dot.cpp $(OPP1S)rocket.cpp $(OPP1S)fireworks.cpp $(OPP1S)animation_canvas.cpp $(OPP1S)main.cpp
	$(CC) $(CFLAGS) $(LDOPTS) -o $(OPP1BIN) has_color.o is_vector.o dot.o rocket.o fireworks.o animation_canvas.o main.o	

fireworks2:
	@echo "Buildeing oppgave 2"
	$(CC) $(CFLAGS) -c $(OPP2S)has_color.cpp $(OPP2S)is_vector.cpp $(OPP2S)dot.cpp $(OPP2S)dot_blinking.cpp $(OPP2S)dot_tinted.cpp $(OPP2S)rocket.cpp $(OPP2S)AbstractDotFactory.cpp $(OPP2S)NormalDotFactory.cpp $(OPP2S)BlinkingDotFactory.cpp $(OPP2S)TintedDotFactory.cpp $(OPP2S)MixedDotFactory.cpp  $(OPP2S)fireworks2.cpp $(OPP2S)animation_canvas.cpp $(OPP2S)main.cpp
	$(CC) $(CFLAGS) $(LDOPTS) -o $(OPP2BIN) has_color.o is_vector.o dot.o dot_blinking.o dot_tinted.o rocket.o AbstractDotFactory.o NormalDotFactory.o BlinkingDotFactory.o TintedDotFactory.o MixedDotFactory.o fireworks2.o animation_canvas.o main.o	

clean:
	$(RM) $(OPP1BIN) $(OPP2BIN) *.o
