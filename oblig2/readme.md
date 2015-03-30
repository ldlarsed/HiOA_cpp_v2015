#Oblig 2: Fyrverkeri

##Kompilering med `make`
Oppgave 1,2 og 3 kan kompileres med `make fireworks`, `make fireworks2` eller `make fireworks3`. For å slette alle kompilerte og binære filer bruk `make clean`. Dersom ingen argument blir sendt til ´make´ kompileres kun oppgave 1. 

##Oppgave 1
Ferdig. 
[./oblig2_oppgave1](./oblig2_oppgave1)

##Oppgave 2
Ferdig. 
[./oblig2_oppgave2](./oblig2_oppgave2)

##Oppgave 3
Påbegynt. Foreløping noen mindre problemer med bruk av static og templates. Får ikke lagt inn `FL_RED` eller annen farge i form av en generic type. Foreløpig er det hårdkodet til `FL_WHITE`.
[./oblig2_oppgave3](./oblig2_oppgave3)

##Oppgave 4
Besvart. 
[./answers_to_questions.md](./answers_to_questions.md)

##Oppgave 5
Frivillig. Ikke implementert. 

##Generelle problem
Det er noen minneslekasjer i de fleste klassene. Håper å finne ut dette under labben. 
```
[luke@weasel oblig2]$ valgrind ./fireworks 
==15640== Memcheck, a memory error detector
==15640== Copyright (C) 2002-2013, and GNU GPL'd, by Julian Seward et al.
==15640== Using Valgrind-3.10.1 and LibVEX; rerun with -h for copyright info
==15640== Command: ./fireworks
==15640== 
==15640== 
==15640== HEAP SUMMARY:
==15640==     in use at exit: 1,458,867 bytes in 7,880 blocks
==15640==   total heap usage: 20,918 allocs, 13,038 frees, 3,489,296 bytes allocated
==15640== 
==15640== LEAK SUMMARY:
==15640==    definitely lost: 220 bytes in 5 blocks
==15640==    indirectly lost: 172 bytes in 1 blocks
==15640==      possibly lost: 0 bytes in 0 blocks
==15640==    still reachable: 1,458,475 bytes in 7,874 blocks
==15640==         suppressed: 0 bytes in 0 blocks
==15640== Rerun with --leak-check=full to see details of leaked memory
==15640== 
==15640== For counts of detected and suppressed errors, rerun with: -v
==15640== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)
```
