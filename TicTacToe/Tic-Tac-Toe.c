#include <stdio.h>

void printBoard(char Row1[], char Row2[], char Row3[], char Border[]) 
{
  // Printing the layout of the board
      printf("\n%s\n%s\n%s\n%s\n%s\n\n\n",Row1,Border,Row2,Border,Row3);
}
void insertSymbol(char *ptr1, char *ptr2, char *ptr3, char coordinates[],char Symbol) 
{
  //Placement of User's Input to respected array
            if(coordinates[0] == '1')          
             *ptr1 = Symbol;         //1st Column of 1st Row
            else if (coordinates[0] == '2')
             *(ptr1 + 2) = Symbol;   //2nd Column of 1st Row
            else if (coordinates[0] == '3')
             *(ptr1 + 4) = Symbol;    //3rd Column of 1st Row
      
           
       
            if(coordinates[0] == '4')
             *ptr2 = Symbol;           //1st Column of 2nd Row
            else if (coordinates[0] == '5')
             *(ptr2 + 2) = Symbol;      //2nd Column of 2nd Row
            else if (coordinates[0] == '6')
             *(ptr2 + 4) = Symbol;     //3rd Column of 2nd Row
      
       
            if(coordinates[0] == '7')
             *ptr3 = Symbol;            //1st Column of 3rd Row
            else if (coordinates[0] == '8')
             *(ptr3 + 2) = Symbol;      //2nd Column of 3rd Row
            else if (coordinates[0] == '9')
             *(ptr3 + 4) = Symbol;      //3rd Column of 3rd Row
       

}
void testWin(char Row1[], char Row2[], char Row3[], int *i)
{
  //Checking the grid for winning box
    if(Row1[0] == 'X' && Row2[2] == 'X' && Row3[4] == 'X') 
     { printf("Congrats X, You Win"); *i = 9; }
     if(Row1[4] == 'X' && Row2[2] == 'X' && Row3[0] == 'X') 
     { printf("Congrats X, You Win"); *i = 9; }
     if(Row1[0] == 'X' && Row2[0] == 'X' && Row3[0] == 'X') 
     { printf("Congrats X, You Win"); *i = 9; }
     if(Row1[2] == 'X' && Row2[2] == 'X' && Row3[2] == 'X') 
     { printf("Congrats X, You Win"); *i = 9; }
     if(Row1[4] == 'X' && Row2[4] == 'X' && Row3[4] == 'X') 
     { printf("Congrats X, You Win"); *i = 9; }
     if(Row1[0] == 'X' && Row1[2] == 'X' && Row1[4] == 'X') 
     { printf("Congrats X, You Win"); *i = 9; }
     if(Row2[0] == 'X' && Row2[2] == 'X' && Row2[4] == 'X') 
     { printf("Congrats X, You Win"); *i = 9; }
     if(Row3[0] == 'X' && Row3[2] == 'X' && Row3[4] == 'X') 
     { printf("Congrats X, You Win"); *i = 9; }
  
    if(Row1[0] == 'O' && Row2[2] == 'O' && Row3[4] == 'O') 
     { printf("Congrats O, You Win"); *i = 9; }
     if(Row1[4] == 'O' && Row2[2] == 'O' && Row3[0] == 'O') 
     { printf("Congrats O, You Win"); *i = 9; }
     if(Row1[0] == 'O' && Row2[0] == 'O' && Row3[0] == 'O') 
     { printf("Congrats O, You Win"); *i = 9; }
     if(Row1[2] == 'O' && Row2[2] == 'O' && Row3[2] == 'O') 
     { printf("Congrats O, You Win"); *i = 9; }
     if(Row1[4] == 'O' && Row2[4] == 'O' && Row3[4] == 'O') 
     { printf("Congrats O, You Win"); *i = 9; }
     if(Row1[0] == 'O' && Row1[2] == 'O' && Row1[4] == 'O') 
     { printf("Congrats O, You Win"); *i = 9; }
     if(Row2[0] == 'O' && Row2[2] == 'O' && Row2[4] == 'O') 
     { printf("Congrats O, You Win"); *i = 9; }
     if(Row3[0] == 'O' && Row3[2] == 'O' && Row3[4] == 'O') 
     { printf("Congrats O, You Win"); *i = 9; }


}

void main () 
{

char Row1[6] = " | | ";   
char Row2[6] = " | | ";   
char Row3[6] = " | | ";   
char Border[6] = "-----";
char input[2];
printf("Welcome to Tic-Tac-Toe:\n");
printf("X plays first, in order to begin enter the position you want to insert aalu or cross\n");
printf("1 for top-left corner, 2 for top-middle, 5 for center and so on\n\n\n");


do {
for(int i = 0; i < 9; i++)
{
  printf("Position: ");
  scanf("%s",input);

  if(i%2 == 0)
    insertSymbol(Row1,Row2,Row3,input,'X');
  if(i%2 == 1)
    insertSymbol(Row1,Row2,Row3,input,'O');

     printBoard(Row1,Row2,Row3,Border);
        testWin(Row1,Row2,Row3,&i);
}

printf("\n\nStart Again? Y? N?: ");
scanf("%s",input);
printf("\n\n");
//Reset the Board
Row1[0] = Row2[0] = Row3[0] = ' ';
Row1[2] = Row2[2] = Row3[2] = ' ';
Row1[4] = Row2[4] = Row3[4] = ' ';


} while(input[0] == 'Y' || input[0] == 'y');



}

