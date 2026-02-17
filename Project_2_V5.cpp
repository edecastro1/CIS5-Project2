#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib>
#include <fstream>
#include <string>
#include <ctime>
using namespace std;
void displayStars(int 10, int = 1);
void divide(double, double);
void changeMe(int);
void showLocal();
void funct1(short int num1 = 11);
void funct2(short int);
void funct3(short int);
void selectionSort(vector<string>&);
void swap(string &, string &);
int binarySearch(const vector<string>&, string);
int square(int);
double square(double);
int linearSearch (const int arr[], int size, int value)
{
    int index = 0;
    int position = -1;
    bool found = false;
}
while (index < size && !found)
{
    if (arr[index] == value)
    {
        found = true;
        position = index;
    }
    index;
}
return position;
void selectionSort(int array[], int size){
    int minIndex, minValue;
}
for (int start = 0; start < (size - 1); start++)
{
    minIndex = start;
    minValue = array[start];
    for (int index = start + 1; index < size; index++)
}
if(array[index] < minValue){
    minValue = array[index];
    minIndex = index;
}
swap(array[minIndex], array[start]);
void bubbleSort(int array[], int size){
    int maxElement;
    int index;
}
for (maxElement = size - 1; maxElement > 0;  maxElement--){
    for (index = 0; index < maxElement; index++)
}
if (array[index] > array[index + 1])
{
    swap(array[index], array[index + 1]);
}
int main () {
    char
    string
    float
    bool
    showLocal();
    showLocal();
    function();
    srand(static_cast<unsigned int>(time(0))); //This generate a random nummber
    int playVal, //These three are integer that will help tell who has the highest
        dealVal,
        numPeep,
        randomNumber;
    int playPts = 0,  //These two are integer that give points to who have the higher number
        dealPts = 0;    
    cout << "Welcome to The Card Game War Fallout edition" << endl << endl; //These are to welcome the person to the game
    cout << "Would you like to continue to play?" << endl; //This ask the person a question
    cout << " Yes or No " << endl;
    cin >> numPeep;
    cout << "You chose " << numPeep << " people to play." << endl; //This is a output that give the command to the program
    if (numPeep != 2 ){
        cout << "Must be a 2 player game!" << endl; //This let the person know how many player are allow

        do{
            cout << "How many players would you be playing with?" << endl; //This ask the person how many player they will be playing 
            cin >> numPeep; //This is a cin statement for the numPeep
        }   while (numPeep < 1 || numPeep > 2); //This is a while loop it decide who have the higher cards
}
int square(int num1)
{
    return num1 * num1;
}
double square(double num2)
{
    return num2 * num2;
}
void doubleNum (int &refVar)
{
    refVar *= 2;
}
bool isValid(int &number)
{
    bool status;
    if (number >= 1 && number <= 100)
        status = true;
    else 
        status = false;
    return status;        
}
void funct1(short int num){
    cout << "This is  function1" << num <<endl;
    num = 6
}
void funct2(short int num){
    cout << "This is function2" << num <<endl;
}
void funct3(short int num){
    cout << "This is function3" << num <<endl;
}
void function()
{
    cout << "This program terminates with the exit function.\n";
    cout << "status\n";
    exit(0);
    cout << "This message will never be displayed\n";
    cout << "because the program has already terminated. \n";
}
void displayStars(int cols, int rows)
{
    for (int down = 0; down < rows; down++)
}
for (int across = 0; across < cols; across++)[
    cout << "*";
    cout << endl;
]
void showLocal(){
    int local1 = 5;

    cout << "local1 is " << local1 <endl;
    localNum = 99;
}
void changeMe(int myValue){
    myValue = 0;

    cout << "Now the value is " << myValue <<endl;
}
void selectionSort(vector<string> &v){
    int minIndex;
    string minValue;
}
for(int start = 0; start < (v.size() - 1); start++){
    minIndex = start;
    minValue = v[start];
}
for(int index = start + 1; index < v.size(); index++){
    if(v[index] < minValue){
        minValue = v[index];
        minIndex = index;
    }
}
swap (v[minIndex], v[start]);
void swap(string &a, string &b){
    string temp = a;
    a = b;
    b = temp;
}

//Setup Remove jokers from a standard 52-card deck, shuffle thoroughly and deal all cards evenly, face-down, into two separate piles, 
//card ranking: Ace(high), King, Queen, Jack, 10, 9, 8, 7, 6, 5, 4, 3, 2 (low).

//Gameplay (Battle)
//Both players simultaneously flip their top card from their pile.
//The player with the higher card wins both cards and places them face-down at the bottom of their own pile.

//War (Tie)
//If the flipped cards are the same rank, a "War" begins.
//Each player places three cards face-down, then one card face-up on top of the original tied cards.
//The player with the higher face-up card wins all the cards (the original pair, the six war cards) and adds them to their pile.
//If the face-up cards tie again, the war process repeats (another three face-down, one face-up) until the tie is broken.

//Winning the Game
//The game ends when one player has collected all the cards, making them the winner.
//If a player runs out of cards during a war (doesn't have enough for the face-down/up sequence), they lose the war and potentially the game, depending on house rules.
cout << "Random Number: " << randomNumber << endl;
 return 0;   
}
void divid(double arg1, double arg2){
    if (arg2 == 0.0){
        cout << "Sorry, I cannot divide by zero.\n";
        return;
    }
    cout << "The quotient is " << (arg1 / arg2) <<endl;
}  
