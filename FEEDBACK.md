# Oblig 1

### Resultat: 
Godkjent!


### Checklist:
* [x] Begge programmen bygger med `make`.
* [x] Begge programmen starter og kjører under Linux.
* [x] **oppvarming** gir riktig output.
* [x] **blackjack** har det viktigeste funksjonaliteten.
	* [x] En spiller har et saldo og kan satse et beløp.
	* [x] En spiller har valgen "HIT" og "STAND".
	* [] En spiller kan ikke fortsette når den har gått tom for penger.
	* [x] Dealerns handlinger virker riktige.
	* [/] Spillet følger reglene til BlackJack.
* [x] Ingen alvorlige kjøretidsfeil (segfault etc.)
* [] Ingen minnelekasjer funnet med `valgrind`.
* [x] Repo innholder `RAPPORT.md`.



### Tilbakemelding:
Veldig utførlig rapport. Et stort pluss for multiplayer, bra!

Fint at du løst oppgaven med objektorientering og klasser og header-filer separat.

* Spillet mangler noen input-validering:

		Place your bets
		--------------------
		(1)$10 (2)$20 (3)$50
		--------------------
		
		andreas please choose your bet?
		50
		Setting bet $0 for andreas.
	
* Her er det altså mulig å spille uten å bette noe.

* Det virker også som at ess kun blir tolket som 11 (og ikke 1):

		---=== DEAL ===---
		andreas	|King of DIAMONDS | Ace of SPADES | Score: 20
		Dealer	|Seven of DIAMONDS | ************* | Score: *
		
		
		Player andreas please choose your action 
		(1)HIT or (2)STAND
		1
		andreas Two of CLUBS 22 BUSTED
		Dealer King of HEARTS 20 
		
		---=== RESULTS ===---
		Player	Score	Wins
		Dealer	20
		andreas	22	$0	

* Spillet lar seg også kjøres med 0 spillere:

		---=== DEAL ===---
		Dealer	|Six of DIAMONDS | ************* | Score: *
		
		Dealer Two of DIAMONDS 18 
		
		---=== RESULTS ===---
		Player	Score	Wins
		Dealer	18

* En annen ting er at hvis jeg better penger så vil jeg aldri miste noe av dem når jeg går BUST.


Det virker også som at valgrind gir minnelekasje:

	==21754== HEAP SUMMARY:
	==21754==     in use at exit: 3,768 bytes in 12 blocks
	==21754==   total heap usage: 71 allocs, 59 frees, 14,102 bytes allocated
	==21754== 
	==21754== LEAK SUMMARY:
	==21754==    definitely lost: 304 bytes in 1 blocks
	==21754==    indirectly lost: 3,464 bytes in 11 blocks
	==21754==      possibly lost: 0 bytes in 0 blocks
	==21754==    still reachable: 0 bytes in 0 blocks
	==21754==         suppressed: 0 bytes in 0 blocks


---

# Oblig 2

### Resultat: 
Godkjent


### Checklist:
* [x] Prosjektet innholder makefile med følgende kommando:
	* [x] `make` - bygger fireworks
	* [x] `make fireworks` - bygger fireworks
	* [x] `make fireworks2` - bygger fireworks2
	* [x] `make clean` - fjerner alle kompilerte filer
	
* [x] **fireworks** oppfyller kravene.
	* [x] Raketter starter på forskjellig tid og plass.
	* [x] Raketter har dotter med en hastighet og med ulike farger (med overvekt av en farge) og retning.
	* [x] Arv og polymorfi er brukt slikt det er tenkt.
	
* [x] **fireworks2** oppfyller kravene.
	* [x] Factory er implementert.
	* [x] Template er implementert.

* [x] Header-filene skal være uforandret.
* [x] Ingen alvorlige kjøretidsfeil (segfault etc.)
* [x] Ingen minnelekasjer funnet med `valgrind`.
* [x] Repo innholder `answers_to_questions.md`.
	* [x] Spørsmålene er godt besvart.

* [] Det er laget en egen animasjon **(optional)**
	* [] Kompileres med `make custom`.
	* [] `animation_canvas` og `animated` er brukt.
	* [] Minst tre animerte elementer.


### Tilbakemelding:
*Kommentar gis ved forespørsel.*

Klarer ikke å se at `tinted_dot` er fullført. Godkjent!

#### Fix:

---
