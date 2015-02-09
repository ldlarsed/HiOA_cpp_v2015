GPP=g++
GPPOPT=-std=c++11
OPPV = "./oppvarming/src/"
BLJ = "./blackjack/src/"
SOURCES = ./blackjack/src/blackjack.cpp ./blackjack/src/HumanIO.cpp ./blackjack/src/HPlayer.cpp ./blackjack/src/BetSize.cpp ./blackjack/src/Player.cpp ./blackjack/src/ScoreCalc.cpp ./blackjack/src/Bank.cpp ./blackjack/src/Game.cpp ./blackjack/src/Card.cpp ./blackjack/src/CardDeck.cpp ./blackjack/src/Strings.cpp ./blackjack/src/Test.cpp

OBJ=oppvarming blackjack

all: $(OBJ)

oppvarming:
	$(GPP) $(GPPOPT) $(OPPV)oppvarming.cpp -o $@

blackjack:
	$(GPP) $(GPPOPT) $(SOURCES) -o $@

	
clean: 
	-$(RM) $(OBJ)

	
#BetSize.o : BetSize.cpp BetSize.h
# 	$(GPP) $(GPPOPT) $(BLJ)BetSize.cpp -o $@
# Card.o : Card.cpp Card.h
# 	$(GPP) $(GPPOPT) $(BLJ)Card.cpp -o $@
# CardDeck.o : CardDeck.cpp CardDeck.h
# 	$(GPP) $(GPPOPT) $(BLJ)CardDeck.cpp -o $@
# Game.o : Game.cpp Game.h
# 	$(GPP) $(GPPOPT) $(BLJ)Game.cpp -o $@
# HPlayer.o : HPlayer.cpp HPlayer.h
# 	$(GPP) $(GPPOPT) $(BLJ)HPlayer.cpp -o $@
# HumanIO.o : HumanIO.cpp HumanIO.h
# 	$(GPP) $(GPPOPT) $(BLJ)HumanIO.cpp -o $@
# ScoreCalc.o : ScoreCalc.cpp ScoreCalc.h
# 	$(GPP) $(GPPOPT) $(BLJ)ScoreCalc.cpp -o $@
# String.o : String.cpp String.h
# 	$(GPP) $(GPPOPT) $(BLJ)Strings.cpp -o $@
# Test.o : Test.cpp Test.h
# 	$(GPP) $(GPPOPT) $(BLJ)Test.cpp -o $@
# Bank.o : Bank.cpp Bank.h
# 	$(GPP) $(GPPOPT) $(BLJ)Bank.cpp -o $@
# Player.o : Player.cpp Player.h
# 	$(GPP) $(GPPOPT) $(BLJ)Player.cpp -o $@\


