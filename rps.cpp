#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <string>
#include <cmath>  
using namespace std;

//Execution
int main() {
    
	//Variables Initialising
	srand(time(NULL)); //ran
	string input, output, outputresult, error = "o", replay, divider = "----------------------", win = "You win!", lose = "You lost!"; //convert ^ to text
	//Counter
	int wincount = 0, losecount = 0, drawcount = 0;
	//Booleans
	bool gameover = false;;
	bool debug = false;
	//Code
	while(true){
		if(!gameover){
    		int outputrandom = 1 + rand() % 3; //rand no between 1&3
    		//VARS
    		//CODE
    		cout << "Scissors, Paper or Stone?" << endl;
    		cin >> input;
    		if (input == "Scissors" || input == "Paper" || input == "Stone") {
    			//Output numbers --> Text
    			switch (outputrandom) {
    		    	case 1:
    				    output = "Scissors";
    				    break;
    			    case 2:
    				    output = "Paper";
    				    break;
    			    case 3:
    				    output = "Stone";
    				    break;
    		    	default:
    				    cout << "Random Output Error" << endl;
                        continue;
    			}
    			//Matchups
    			//Draw
    			if (input == output) {
    				outputresult = "It's a tie!";
    				drawcount++;
    			}
    			//Scissors
    			else if (input == "Scissors" && output == "Paper") {
    				outputresult = win;
    				wincount++;
    			}
    			else if (input == "Scissors" && output == "Stone") {
    				outputresult = lose;
    				losecount++;
    			}
    			//Paper
    			else if (input == "Paper" && output == "Scissors") {
    		    	outputresult = lose;
    				losecount++;
    			}
    			else if (input == "Paper" && output == "Stone") {
    					outputresult = win;
    					wincount++;
    			}
    			else if (input == "Stone" && output == "Scissors") {
    				outputresult = win;
    				wincount++;
    			}
    			else if (input == "Stone" && output == "Paper") {
    				outputresult = lose;
    				losecount++;
    			}
    			else {
    				cout << "Output Result Error" << endl;
    				continue;
    			}
    		}
    		else {
    			cout << "Invalid Input" << endl;
    			continue;
    		}
    		//Results cout
    		if (output == "Scissors" || output == "Paper" || output == "Stone") {
    			cout << divider << endl << "I choose " << output << "!" << endl << outputresult << endl << divider << endl;
    		}
    		gameover = true;
	    }
		cout << "Would you want to play again? [Yes][No][Stats]" << endl;
		cin >> replay;
		if (replay == "Yes") {
				cout << divider << endl;
				gameover = false;
				continue;
			}
			else if (replay == "Stats") {
				cout << divider << endl;
				if (wincount > 0 || losecount > 0 || drawcount > 0) {
					if (wincount > 0) {
						if (wincount == 1) {
							cout << "You have won " << wincount << " (" << round(((float)wincount)/(wincount+losecount+drawcount)*100) << "%)"  << " time!" << endl;
						}
						else {
							cout << "You have won " << wincount << " (" << round(((float)wincount)/(wincount+losecount+drawcount)*100) << "%)"  << " times!" << endl;
						}
					}
					if (losecount > 0) {
						if (losecount == 1) {
							cout << "You have lost " << losecount << " (" << round(((float)losecount)/(wincount+losecount+drawcount)*100) << "%)"  << " time!" << endl;
						}
						else {
							cout << "You have lost " << losecount << " (" << round(((float)losecount)/(wincount+losecount+drawcount)*100) << "%)"  << " times!" << endl;
						}
					}
					if (drawcount > 0) {
						if (drawcount == 1) {
							cout << "You have tied " << drawcount << " (" << round(((float)drawcount)/(wincount+losecount+drawcount)*100) << "%)"  << " time!" << endl;
						}
						else {
							cout << "You have tied " << drawcount << " (" << round(((float)drawcount)/(wincount+losecount+drawcount)*100) << "%)"  << " times!" << endl;
						}
					}
				}
				else {
					cout << "I can't show stats if you have not played any games yet!" << endl;
				}
				cout << divider << endl;
				gameover = false;
				continue;
			}
			//Game close and Score cout
			else if (replay == "No") {
				if (wincount > 0 || losecount > 0 || drawcount > 0) {
					if (wincount > 0) {
						if (wincount == 1) {
							cout << "You have won " << wincount << " (" << round(((float)wincount)/(wincount+losecount+drawcount)*100) << "%)" << " time!" << endl;
						}
						else {
							cout << "You have won " << wincount << " (" << round(((float)wincount)/(wincount+losecount+drawcount)*100) << "%)" << " times!" << endl;
						}
					}
					if (losecount > 0) {
						if (losecount == 1) {
							cout << "You have lost " << losecount << " (" << round(((float)losecount)/(wincount+losecount+drawcount)*100) << "%)" << " time!" << endl;
						}
						else {
							cout << "You have lost " << losecount << " (" << round(((float)losecount)/(wincount+losecount+drawcount)*100) << "%)" << " times!" << endl;
						}
					}
					if (drawcount > 0) {
						if (drawcount == 1) {
							cout << "You have tied " << drawcount << " (" << round(((float)drawcount)/(wincount+losecount+drawcount)*100) << "%)" << " time!" << endl;
						}
						else {
							cout << "You have tied " << drawcount << " (" << round(((float)drawcount)/(wincount+losecount+drawcount)*100) << "%)" << " times!" << endl;
						}
					}
					cout << divider << endl;
				}
				else {
					cout << "I can't show stats if you have not played any games yet!" << endl;
				}
				cin.get();
				break;
			}
			else {
				cout << "Invalid Input" << endl;
				continue;
			}
    }
	return 0;
}