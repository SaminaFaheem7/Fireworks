#include <iostream>
#include <stdlib.h>
#include <vector>
#include "Firework.h"
using namespace std;


void printChoice(){                              //Menu
    cout << "Do you want to see fireworks? ";
}

void drawTheString(int x, int y, char**& f){   //Drawing the string of the firework
    x += 1;                                    //where the string starts on the firework (the point)

    if(y==30)                   // If the firework is in between then "|"
    {
        while(x < 20 && y < 60){
            f[x][y] = '|';
            x++;

        }
    }

    if (y > 30) {                  // If the firework lies on the left side then the string is " / "
        y -= 1;
        while(x < 20 && y >= 0){
            f[x][y] = '/';
            x++;
            y--;
        }
    }

    if (y < 30) {                 // If the firework lies on the right side then the string is "\"
        y++;
        while (x < 20 && y < 60) {
            f[x][y] = '\\';
            x++;
            y++;
        }
    }
}


void createFirework1(char**& f, int row, int col)     // Creating the first firework
{
    for (int i = 0; i <= 2; i++) f[i] = new char[5];
    f[row][col] = '.';
    f[row][col+1] = '*';
    f[row][col+2] = ' ';
    f[row][col+3] = '*';
    f[row][col+4] = '.';

    f[row+1][col] = ' ';
    f[row+1][col+1] = '*';
    f[row+1][col+2] = '.';
    f[row+1][col+3] = '.';
    f[row+1][col+4] = '*';

    f[row+2][col] = ' ';
    f[row+2][col+1] = ' ';
    f[row+2][col+2] = ' ';
    f[row+2][col+3] = '*';
    f[row+2][col+4] = ' ';

}

void firework1(char**& f, char**image1, int row, int col) {
    for (int i = 0; i <= 2; ++i) {
        for (int j = 0; j <= 4; ++j) {
            if (0 <= row+i and row+i < 20 and 0 <= col+j and col+j < 60)
                f[row+i][col+j] = image1[i][j];
        }
    }
}

void createFirework2(char**& f, int row, int col) {     // Creating the second firework
    for (int i = 0; i <= 3; ++i) f[i] = new char[9];

    f[row][col] = ' ';
    f[row][col + 1] = ' ';
    f[row][col + 2] = '^';
    f[row][col + 3] = ',';
    f[row][col + 4] = '^';
    f[row][col + 5] = ',';
    f[row][col + 6] = '^';
    f[row][col + 7] = ' ';
    f[row][col + 8] = ' ';

    f[row + 1][col] = '^';
    f[row + 1][col + 1] = ',';
    f[row + 1][col + 2] = '^';
    f[row + 1][col + 3] = ',';
    f[row + 1][col + 4] = '^';
    f[row + 1][col + 5] = ',';
    f[row + 1][col + 6] = '^';
    f[row + 1][col + 7] = ',';
    f[row + 1][col + 8] = '^';

    f[row + 2][col] = '^';
    f[row + 2][col + 1] = ',';
    f[row + 2][col + 2] = '^';
    f[row + 2][col + 3] = ',';
    f[row + 2][col + 4] = '^';
    f[row + 2][col + 5] = ',';
    f[row + 2][col + 6] = '^';
    f[row + 2][col + 7] = ',';
    f[row + 2][col + 8] = '^';

    f[row + 3][col] = ' ';
    f[row + 3][col + 1] = ' ';
    f[row + 3][col + 2] = '^';
    f[row + 3][col + 3] = ',';
    f[row + 3][col + 4] = '^';
    f[row + 3][col + 5] = ',';
    f[row + 3][col + 6] = '^';
    f[row + 3][col + 7] = ' ';
    f[row + 3][col + 8] = ' ';
}

void firework2(char**& f, char**image2, int row, int col) {
    for (int i = 0; i <= 3; ++i) {
        for (int j = 0; j <= 8; ++j) {
            if (0 <= row+i and row+i < 20 and 0 <= col+j and col+j < 60)
                f[row+i][col+j] = image2[i][j];
        }
    }
}

void createFirework3(char**& f, int row, int col) {     // Creating the third firework
    for (int i = 0; i <= 2; ++i) f[i] = new char[7];

    f[row][col ] = '`';
    f[row][col + 1] = 'o';
    f[row][col + 2] = '`';
    f[row][col + 3] = 'o';
    f[row][col + 4] = '`';
    f[row][col + 5] = ' ';
    f[row][col + 6] = ' ';

    f[row + 1][col] = 'o';
    f[row + 1][col + 1] = '`';
    f[row + 1][col + 2] = 'o';
    f[row + 1][col + 3] = '`';
    f[row + 1][col + 4] = 'o';
    f[row + 1][col + 5] = '`';
    f[row + 1][col + 6] = 'o';

    f[row + 2][col] = ' ';
    f[row + 2][col + 1] = '`';
    f[row + 2][col + 2] = 'o';
    f[row + 2][col + 3] = '`';
    f[row + 2][col + 4] = 'o';
    f[row + 2][col + 5] = '`';
    f[row + 2][col + 6] = ' ';
}

void firework3(char**& f, char**image3, int row, int col) {
    for (int i = 0; i <= 2; ++i) {
        for (int j = 0; j <= 6; ++j) {
            if (0 <= row+i and row+i < 20 and 0 <= col+j and col+j < 60)
                f[row+i][col+j] = image3[i][j];
        }
    }
}

void createFirework4 (char**& f, int row, int col) {   // Creating the fourth firework
    for (int i = 0; i <= 4; ++i) f[i] = new char[11];

    f[row][col ] = ' ';
    f[row][col + 1] = ' ';
    f[row][col + 2] = '~';
    f[row][col + 3] = '@';
    f[row][col + 4] = '~';
    f[row][col + 5] = '*';
    f[row][col + 6] = '~';
    f[row][col + 7] = '@';
    f[row][col + 8] = '~';
    f[row][col + 9] = ' ';
    f[row][col + 10] = ' ';

    f[row + 1][col ] = '~';
    f[row + 1][col + 1] = '*';
    f[row + 1][col + 2] = '~';
    f[row + 1][col + 3] = '@';
    f[row + 1][col + 4] = '~';
    f[row + 1][col + 5] = '*';
    f[row + 1][col + 6] = '~';
    f[row + 1][col + 7] = '@';
    f[row + 1][col + 8] = '~';
    f[row + 1][col + 9] = '*';
    f[row + 1][col + 10] = '~';

    f[row + 2][col ] = '~';
    f[row + 2][col + 1] = '*';
    f[row + 2][col + 2] = '~';
    f[row + 2][col + 3] = '@';
    f[row + 2][col + 4] = '$';
    f[row + 2][col + 5] = '#';
    f[row + 2][col + 6] = '$';
    f[row + 2][col + 7] = '@';
    f[row + 2][col + 8] = '~';
    f[row + 2][col + 9] = '*';
    f[row + 2][col + 10] = '~';

    f[row + 3][col ] = '~';
    f[row + 3][col + 1] = '*';
    f[row + 3][col + 2] = '~';
    f[row + 3][col + 3] = '@';
    f[row + 3][col + 4] = '~';
    f[row + 3][col + 5] = '*';
    f[row + 3][col + 6] = '~';
    f[row + 3][col + 7] = '@';
    f[row + 3][col + 8] = '~';
    f[row + 3][col + 9] = '*';
    f[row + 3][col + 10] = '~';

    f[row + 4][col ] = ' ';
    f[row + 4][col + 1] = ' ';
    f[row + 4][col + 2] = '~';
    f[row + 4][col + 3] = '@';
    f[row + 4][col + 4] = '~';
    f[row + 4][col + 5] = '*';
    f[row + 4][col + 6] = '~';
    f[row + 4][col + 7] = '@';
    f[row + 4][col + 8] = '~';
    f[row + 4][col + 9] = ' ';
    f[row + 4][col + 10] = ' ';
}

void firework4(char**& f, char**image4, int row, int col) {
    for (int i = 0; i <= 4; ++i) {
        for (int j = 0; j <= 10; ++j) {
            if (0 <= row+i and row+i < 20 and 0 <= col+j and col+j < 60)
                f[row+i][col+j] = image4[i][j];
        }
    }
}

void print(char**& fire){                       //Printing the fireworks
    for (int i=0; i < 20; i++ )
    {
        for(int j =0; j < 60; j++) {
            cout << fire[i][j];
        }
        cout << endl;
    }

}

void firework(){

    int temp1 = rand()%  1200;                    // Random numbers generated
    int temp2 = rand() % 1200;
    int temp3 = rand() % 1200;
    int temp4 = rand() % 1200;


    char** fire = new char*[20];            //Creating the function and setting it to an empty function instead of null
    for (int i=0; i < 20; i++ )
    {
        fire[i] = new char[60];
        for(int j =0; j < 60; j++){
            fire[i][j]= ' ';
        }
    }

    // allocating space to the fireworks
    char** image1 = new char*[3];
    char** image2 = new char*[4];
    char** image3 = new char*[3];
    char** image4 = new char*[5];

//  Creating rows and columns .
    createFirework1(image1, 0, 0);
    createFirework2(image2, 0, 0);
    createFirework3(image3, 0, 0);
    createFirework4(image4, 0, 0);


// Starting point
    vector<vector<int>> startingPoints;
    int row = (temp1 % 20) / 2;              // to show all the 4 on the screen
    int col = (temp1 % 60) / 2;
    startingPoints.push_back({row, col});

    firework1(fire,image1,row,col);
    drawTheString(row+2, col+3, fire );

    row = (temp2 % 20) / 2;
    col = (temp2 % 60) / 2;
    startingPoints.push_back({row, col});

    firework2(fire,image2,row,col);
    drawTheString(row+3 , col+5 , fire );
    row = (temp3 % 20) / 2;
    col = (temp3 % 60) / 2;
    startingPoints.push_back({row, col});

    firework3(fire,image3,row,col);
    drawTheString(row+2 , col+2  , fire);

    row = (temp4 % 20) / 2;
    col = (temp4 % 60) / 2;
    startingPoints.push_back({row, col});

    firework4(fire,image4,row,col);
    drawTheString(row+4 , col+3 , fire);

    print(fire);       // Printing the firework

    // Deleting to free up space
    for (int i=0; i < 20; i++ )
    {
        delete[] fire[i];
    }

    for (int i=0; i < 3; i++ )
    {
        delete[] image1[i];
        delete[] image3[i];
    }

    for (int i = 0; i < 4; i++) {
        delete[] image2[i];
    }

    for (int i=0; i < 5; i++ )
    {
        delete[] image4[i];
    }

    delete[] fire;
    delete[] image1;
    delete[] image2;
    delete[] image3;
    delete[] image4;
}

// Continue menu
bool continueMenu() {
    while (true) {
        cout << "Do you want to see fireworks? (enter y | n ): ";
        string sentence;
        getline(cin, sentence);

        if (sentence == "y") {
            return true;
        } else if (sentence == "n") {
            return false;
        } else {
            cout << "incorrect input" << endl;
        }
    }

}