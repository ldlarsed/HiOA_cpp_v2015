GPP=g++
GPPOPT=-std=c++11
OPPV = "./Oppvarming/src/"
BLJ = "./BlackJack/src/"

OBJ=oppvarming blackjack

all: $(OBJ)

oppvarming:
	$(GPP) $(GPPOPT) $(OPPV)oppvarming.cpp -o $@

blackjack:
	$(GPP) $(GPPOPT) $(BLJ)blackjack.cpp -o $@
	$(GPP) $(GPPOPT) $(BLJ)AiPlayer.cpp -o $@
	$(GPP) $(GPPOPT) $(BLJ)Bank.cpp -o $@
	$(GPP) $(GPPOPT) $(BLJ)BetSize.cpp -o $@
	$(GPP) $(GPPOPT) $(BLJ)Card.cpp -o $@
	$(GPP) $(GPPOPT) $(BLJ)CardDeck.cpp -o $@
	$(GPP) $(GPPOPT) $(BLJ)Game.cpp -o $@
	$(GPP) $(GPPOPT) $(BLJ)HPlayer.cpp -o $@
	$(GPP) $(GPPOPT) $(BLJ)HumanIO.cpp -o $@
	$(GPP) $(GPPOPT) $(BLJ)Player.cpp -o $@
	$(GPP) $(GPPOPT) $(BLJ)ScoreCalc.cpp -o $@
	$(GPP) $(GPPOPT) $(BLJ)Strings.cpp -o $@
	$(GPP) $(GPPOPT) $(BLJ)Test.cpp -o $@


clean: 
	-$(RM) $(OBJ)
