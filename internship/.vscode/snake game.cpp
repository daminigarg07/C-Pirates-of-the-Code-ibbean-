#include <iostream.h>
#include <conio.h>
#include <windowsx.h>
using namespace std;

//height and width of boundary
const int width=80;
const int height=20;

// Snake head coordinates of snake (x-axis, y-axis) 
int x, y; 

//food coordinates
int fruitX , fruitY;

// array to store the coordinate of snake tail
int sTailX[100], sTailY[100];

//variable to store length of tail
int sTailLen;

//store movement
enum sDirection{STOP=0,LEFT,RIGHT,UP,DOWN};   
/*Enumerations allow you to define a set of named integer constants, where each constant represents a specific value. 
In this case, the enumeration defines five constants: 
STOP, LEFT, RIGHT, UP, and DOWN. They are implicitly assigned consecutive integer values starting from 0, so STOP gets the value 0, LEFT gets 1, RIGHT gets 2, and so on.*/


// snakesDirection variable 
sDirection sDir; 
/*variable sDir of type snakesDirection. 
This variable can hold one of the constants defined in the snakesDirection enumeration. 
It's declared but not initialized, so its value will be whatever happens to be in memory at the time unless explicitly initialized later in the code.*/

//score
int score;

//boolean variable to check game over
bool isGameOver;


//initialise game
void GameInit()
{
	isGameOver=false;
	sDir=STOP;
	x=width/2;
	y=height/2;
	fruitX=rand() % width;  //generate a random int in range 0 to width
	fruitY= rand() % height;
	score=0;
}

// Function for creating the game board & rendering 
void GameRender(string playerName)
{
	system("cls"); //clear console
	
	//creating a top wall with'_'
	for(int i=0;i<width+2;i++)
	{
		cout<<"_";
	}
	cout<<endl;
	for(int i=0;i<height;i++)
	{
		for(int j=0;j<=width;j++)
		{
			// Creating side walls with '|' 
			if(j==0||j==width)
			{
				cout<<"|";
			}
			
			//create sanke head
			if(i==y && j==x)
			{cout<<"O";}
			
			//food
			else if(i==fruitX && j==fruitY)
			{ 
			  cout<<"#";
			}
			else
			{
				bool prTail=false;
				for(int k=0;k<sTailLen;k++)
				{
					if(sTailX[k]==j&& sTailY[k]==i)
					{
						cout<<"o";
						prTail=true;
					}
				}
				if(!prTail)
				cout<<" ";
			}
		}
		cout<<endl;
	}	
	// Creating bottom walls with '-' 
    for (int i = 0; i < width + 2; i++) 
        cout << "-"; 
    cout << endl; 
  
    // Display player's score 
    cout << playerName << "'s Score: " << score 
         << endl; 
}

//function to update game state
void UpdateGame()
{
	int prevX=sTailX[0];
	int prevY=sTailY[0];
	int prev2X , prev2Y;
	sTailX[0]=x;
	sTailY[0]=y;
	
	for(int i =1;i<sTailLen;i++)
	{
		prev2X=sTailX[i];
		prev2Y=sTailY[i];
		sTailX[i]=prevX;
		sTailY[i]=prevY;
		prevX = prev2X; 
        prevY = prev2Y;
	}
	switch(sDir)
	{
		case LEFT:
			x--;
			break;
		case RIGHT:
			x++;
			break;
		case UP:
			y--;
			break;
		case DOWN:
			y++;
			break;	
	}
	
	// Checks for snake's collision with the wall (|) 
    if (x >= width || x < 0 || y >= height || y < 0) 
        {
		   isGameOver = true; 
		}
        
    // Checks for collision with the tail (o) 
    for (int i = 0; i < sTailLen; i++)
	{ 
        if (sTailX[i] == x && sTailY[i] == y) 
        {
			isGameOver = true; 
		}
    }
	
	//check snake collide with food
	if(x==fruitX&& y==fruitY)
	{
		score+=10;
		fruitX=rand()%width;
		fruitY=rand()%height;
		sTailLen++;
	}    
}

int SetDifficulty() 
{ 
    int dfc, choice; 
    cout << "\nSET DIFFICULTY\n1: Easy\n2: Medium\n3: hard "
            "\nNOTE: if not chosen or pressed any other "
            "key, the difficulty will be automatically set "
            "to medium\nChoose difficulty level: "; 
    cin >> choice; 
    switch (choice) { 
    case '1': 
        dfc = 50; 
        break; 
    case '2': 
        dfc = 100; 
        break; 
    case '3': 
        dfc = 150; 
        break; 
    default: 
        dfc = 100; 
    } 
    return dfc; 
}

// Function to handle user UserInput 
void UserInput() 
{ 
    // Checks if a key is pressed or not 
    if (_kbhit()) 
	{ 
        // Getting the pressed key 
        switch (_getch()) 
		{ 
        case 'a': 
            sDir = LEFT; 
            break; 
        case 'd': 
            sDir = RIGHT; 
            break; 
        case 'w': 
            sDir = UP; 
            break; 
        case 's': 
            sDir = DOWN; 
            break; 
        case 'x': 
            isGameOver = true; 
            break; 
        } 
    } 
}

int main()
{
	string playerName;
	cout<<"enter your name: ";
	cin>>playerName;
	int dfc=SetDifficulty();
	
	GameInit();
	while(!isGameOver)
	{
		GameRender(playerName);
		UserInput();
		UpdateGame();
		Sleep(dfc); //creating a delay for according to the chosen difficulty 
	}
	return(0);
}



























