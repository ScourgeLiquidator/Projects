#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>
int X[9] = {0, 1, 2, 3, 4, 5, 6, 7, 8};

int random1() {
    srand(time(0));
    int v = 0;
    while (1) {
        v = rand() % 10;
        for (int i = 0; i < 9; i++) {
            if (X[i] == v) {
                return v;
            }
        }
    }
}

void display(char x[3][3]) {
    printf("\n******************\n");
    for (int i = 0; i < 3; i++) {
        for (int k = 0; k < 3; k++) {
            if(k==2)
                printf("  %c",x[i][k]);
            else
                printf("  %c   |", x[i][k]);
        }
        if(i<=1)
            printf("\n------|------|------\n");
        else    
            printf("\n\n");
    }
    printf("******************\n");
}

int checkWin(char x[3][3]) {
    if ((x[0][0] == 'O' || x[0][0] == 'X') && x[0][0] == x[0][1] && x[0][1] == x[0][2]) // first row
        return 1;
    else if ((x[1][0] == 'O' || x[1][0] == 'X') && x[1][0] == x[1][1] && x[1][1] == x[1][2]) // second row
        return 1;
    else if ((x[2][0] == 'O' || x[2][0] == 'X') && x[2][0] == x[2][1] && x[2][1] == x[2][2]) // third row
        return 1;
    else if ((x[0][0] == 'O' || x[0][0] == 'X') && x[0][0] == x[1][0] && x[1][0] == x[2][0]) // first column
        return 1;
    else if ((x[0][1] == 'O' || x[0][1] == 'X') && x[0][1] == x[1][1] && x[1][1] == x[2][1]) // second column
        return 1;
    else if ((x[0][2] == 'O' || x[0][2] == 'X') && x[0][2] == x[1][2] && x[1][2] == x[2][2]) // third column
        return 1;
    else if ((x[0][0] == 'O' || x[0][0] == 'X') && x[0][0] == x[1][1] && x[1][1] == x[2][2]) // principal diagonal
        return 1;
    else if ((x[0][2] == 'O' || x[0][2] == 'X') && x[0][2] == x[1][1] && x[1][1] == x[2][0]) // other diagonal
        return 1;
    else
        return 0;
}

int main() {
    
    int t = 0, r, c, v, f = 0, rn = 0;
    char g,ch;
    char A[3][3] = {{'.', '.', '.'}, {'.', '.', '.'}, {'.', '.', '.'}};
    printf("\n=================================================================================================\n\n");
    printf("PRESS ANY KEY TO START THE GAME ");
    scanf("%c",&g);
    printf("  O \tOR\t X\nCHOOSE YOUR SYMBOL : ");
    scanf(" %c",&g);   
    printf("0 is the Starting index and 2 is the Ending index (both rows and columns)\n");
    g=toupper(g);
    display(A);
    if(g=='O')
        ch='X';
    else 
        ch='O';
        
    while (t != 5) {
        t++;
        
        while(1)
        {
            printf("Enter the row no. : ");
            scanf("%d", &r);
            printf("Enter the column no. : ");
            scanf("%d", &c);
            if(X[r*3 + c]==999 || X[r*3 + c]==-999)
            {
                printf("Position is already occupied, try again with a different position !\n");                
            }
            else
            {
                A[r][c] = g; // Assigning user turn
                break;
            }
        }
        if (checkWin(A)) 
        {
            display(A);
            printf("\nGAME IS OVER - YOU WON !!!\n");
            f = 1;
            break;
        }
        v = r * 3 + c; // converting to 1D position
        X[v] = 999;
        if (t == 5)
        {            
            break;
        }
        rn = random1(); // calling the random function to assign any of the left position
        A[rn / 3][rn % 3] = ch;//Assigning computer's turn
        v = (rn / 3) * 3 + (rn % 3);
        X[v] = -999;
        display(A);
        if (checkWin(A)) 
        {
            printf("\nGAME IS OVER - YOU LOST !!!\n");
            f = 1;
            break;
        }
    }
    if (f == 0)
    {
        display(A);
        printf("\nGAME IS OVER - TIE !!!\n");
    }

    printf("\n\n=================================================================================================\n\n");
    return 0;
}
