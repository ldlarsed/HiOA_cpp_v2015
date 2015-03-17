# Denne kommandoen gir deg FLTK-versjon
FLTK := $(shell fltk-config --version )

ifndef FLTK
$(error "Fant ingen versjon av FLTK!")
endif

# Her gjør jeg en manuell if-test for å sjekke versjon
# (PS: Ikke nødvendig for obligen, bare for å vise noen mulige opsjoner til FLTK)
ifeq ($(FLTK),1.3.1)

# Den enkleste varianten
LDOPTS:=-L/usr/local/lib -lfltk -lm

else
ifeq ($(FLTK),1.3.3)

# Litt mer, for 1.3
LDOPTS:=-L/usr/local/lib -lfltk -lXfixes -lXext -lpthread -ldl -lm -lX11
else

# Man kan la fltk-config finne ut av det for seg
LDOPTS:=$(shell fltk-config --ldflags)

endif
endif

SRC=fltk_test.cpp
BINARY=fltk_test

all: info fltk

# Skriv ut litt info om FLTK lokalt
info:
	@echo "==================== BIULDING FOR FLTK ================================"
	@echo "Found FLTK-version: \t" $(FLTK) 
	@echo "Assumed options: \t" $(LDOPTS)
	@echo ""
	@echo 'Full options from "fltk-config --ldflags:"'
	@echo $(shell fltk-config --ldflags)
	@echo "======================================================================"


# Bygg, med valgte opsjoner
fltk:
	@echo "Building for "$(FLTK)
	g++ -std=c++11 $(SRC) -o $(BINARY) $(LDOPTS)
	@echo 
	@echo 'Done. Run with ./'$(BINARY)
	@echo 


clean:
	$(RM) $(BINARY)
