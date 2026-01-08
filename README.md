# Makefile Demo - Anleitung für Tutoren

## Vorbereitung
```bash 
git clone https://github.com/JoyoMDEV/Tutorium-Makefile-Demo.git 
cd Tutorium-Makefile-Demo
```
## Demo-Ablauf

### 1. Problem zeigen (manuelles Kompilieren)
```bash
# Zeig wie nervig das ist:
gcc -Wall -c main.c
gcc -Wall -c utils.c
gcc -Wall -c mathe.h
gcc -o main main.o utils.o mathe.h
./main

# Aufräumen und nochmal - fehleranfällig!
rm *.o main
```

### 2. Mit Makefile
```bash
# Einfach nur:
make
./main

# Aufräumen:
make clean
```

### 3. Der Clou: Inkrementelles Bauen
```bash
make                    # Alles kompilieren
make                    # "Nothing to be done" - nichts geändert!

# Jetzt eine Datei ändern (z.B. in utils.c einen Kommentar hinzufügen)
touch utils.c           # oder wirklich editieren
make                    # Nur utils.o und main werden neu gebaut!
```

### 4. Abhängigkeiten demonstrieren
```bash
touch utils.h           # Header "geändert"
make                    # BEIDE .o Dateien werden neu kompiliert
                        # weil beide von utils.h abhängen
```

## Wichtige Punkte zum Erklären

1. **Tab vor Befehlen ist PFLICHT** - häufigster Anfängerfehler!
2. **Target: Dependencies** - links was gebaut wird, rechts was dafür nötig ist
3. **Variablen** - CC, CFLAGS können zentral geändert werden
4. **clean** - Konvention zum Aufräumen
5. **Timestamps** - Make schaut auf Änderungszeitpunkte

## Typische Fragen

**"Warum nicht einfach alles in eine Zeile?"**
→ Bei großen Projekten dauert das ewig. Make baut nur das Nötige neu.

**"Was ist .PHONY?"**
→ Sagt Make, dass "clean" keine Datei ist. Sonst würde Make bei einer
   Datei namens "clean" denken, das Target ist schon erledigt.

**"Muss ich das auswendig können?"**
→ Nein, aber die Grundstruktur verstehen. Kopieren und anpassen reicht.