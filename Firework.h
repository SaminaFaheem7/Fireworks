#ifndef PROGRAM4_FIREWORK_H
#define PROGRAM4_FIREWORK_H

void printChoice();
void drawTheString(int x, int y, char**& f);

void createFirework1(char**& f, int row, int col);
void firework1(char**& f, char**image1, int row, int col);

void createFirework2(char**& f, int row, int col);
void firework2(char**& f, char**image2, int row, int col);

void createFirework3(char**& f, int row, int col);
void firework3(char**& f, char**image3, int row, int col);

void createFirework4 (char**& f, int row, int col);
void firework4(char**& f, char**image4, int row, int col);

void print(char**& fire);

void firework();
bool continueMenu();

#endif //PROGRAM4_FIREWORK_H
