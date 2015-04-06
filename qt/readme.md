#Notater for bruk av Qt Creator

##`.gitigniore`
I `.gitignore` er det lagt til:
* `build-*`
* `*.user`

##Importering av prosjekt i Qt Creator
Mappen som begynner på build inneholder Makefile og binære filer. Denne blir som regel lagt til i samme mappe som workspace for prosjektet (dersom man referer til Eclipse termer). Derfor kan den ekskluderes. 
Alle filer som slutter på *.pro *\ trenger man ikke ettersom det er xml konfigurasjonsfil for debugging og release mapper til prosjektet. Dersom denne mangler kommer Qt Creator automatisk spørre om hvor disse skal da oppretter. 
Den eneste filen som man trenger er *.pro *\ som spesifiserer at dette er et Qt Creator prosjekt. Uten denne får vi ikke importert prosjektet. 

##Installasjon
Installer Qt Creator med tilhørende pakker gjennom:
`yum install gt-creator*`

Deretter legg til `qt-devel*` som er nødvendig for autocomplete og andre ting.
For å få med alle pakker er det også lurt å installere alle qt5 tilleg med `qt5*`.

Dersom disse ikke finnes i repositoryn kan de lastes ned med hjelp av Qt-OnlineInstaller som er tilgjengelig for alle Linux, PC og Mac: [https://www.qt.io/download-open-source/](https://www.qt.io/download-open-source/)

##Øvrig
Qt Creator kan klage iblandt på den binære filen er utenfor mappen til prosjektet. Dette har en tendesn til å komme opp dersom man ikke har foretatt en build på prosjektet. 
