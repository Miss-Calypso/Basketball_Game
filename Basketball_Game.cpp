/************************************************************

A small terminal game designed for two players. Each player will be shooting 5 racks with 5 basketballs each. Based on the inputed shooting
ability the game will calculate the total score of each player. The player with a bigger score will be declared a winner. (A tie game is possibel)

Each rack will have 4 shots that are worth one point each and one shot that is worth 2 ponts. The 2 point shot is shot last in every rack.
The 5 racks contain one rack with only 2 point shots. You will be able to input the position of your 2 point rack called "money ball rack".
It will not matter where you place the money ball rack. The position will only matter when printing out the total score of each game. 

 *************************************************************/

#include <iostream>

using namespace std;

//First function will generate one normal rack, you can loop it to have as many racks as you want.

int array_generation_main(int *p, int a){

//Make a random array of size 5

    for(int i = 0; i < 5; i++){

        p[i] = (rand() %100) + 1;

    }

//Array to print out and keep track of the score and count as well
    char rr[5];

    int count_X = 0;
    int count_M = 0;

//Feel in new array with X and O based on the random array

    for(int i = 0; i < 4; i++){

        if(p[i] < a){
            
            rr[i] = 'O';
            count_X++;
        }
        else{
            
            rr[i] = 'X';
        }
    }
//Feel in the last place of the new array with M or X

     for(int i = 0; (i = 4); i++){

        if(p[i] < a){

           rr[i] = 'M';
           count_M++;
        }
        else{

            rr[i] = 'X';

        }
        break;

    }
//Print out the new array 

    for(int i = 0; i < 5; i++) {
        cout << rr[i] << " ";
    }

//printing out the total points for the rack and if statements for the money ball possition

    int rack_points;

    if(count_M == 1){

        rack_points = count_X + (count_M + 1);

        cout << "| "<< rack_points << " pts";

    }
    else{

        rack_points = count_X + (count_M);

        cout << "| "<< rack_points << " pts";

    }

    return rack_points;

}

//Second function to make a money-ball rack, loop as many times as you want

int money_ball_array(int *p, int a){

//create a randon array of size 5

    for(int i = 0; i < 5; i++){

        p[i] = (rand() %100) + 1;

    }

    char rr[5];
    int count_M = 0;

// New array for money ball rack

    for(int i = 0; i < 5; i++){

        if(p[i] < a){
            
            rr[i] = 'M';
            count_M++;
        }
        else{
            
            rr[i] = 'X';
        }
    }

//print mount the money ball rack

    for(int i = 0; i < 5; i++) {

        cout << rr[i] << " ";
    }

//get the count for the rack and print it out

    int rack_point_M = count_M * 2;

    cout << "| "<<rack_point_M << " pts";

    return rack_point_M;

}

//This function works with money_ball_position depending on the users input and prints out 5 racks

int player_output(int money_ball_position, int shooting_ability){

//Varaible for total count of the game as wil as array declerarion for the first and second fucntion.

    int total_points_1 = 0;

    int array[5];
    int *p = array;

//Using if statements for money ball positioning

    if(money_ball_position == 1){

        cout << "Rack 1:" << " ";
        total_points_1 += money_ball_array(p, shooting_ability);
        cout << endl;
        
        cout << "Rack 2:" << " ";
        total_points_1 += array_generation_main(p, shooting_ability);
        cout << endl;

        cout << "Rack 3:" << " ";
        total_points_1 += array_generation_main(p, shooting_ability);
        cout << endl;

        cout << "Rack 4:" << " ";
        total_points_1 += array_generation_main(p, shooting_ability);
        cout << endl;

        cout << "Rack 5:" << " ";
        total_points_1 += array_generation_main(p, shooting_ability);
        cout << endl;
        cout << endl;

        cout << "Total: " << total_points_1 << " pts" << endl;

    }
    if(money_ball_position == 2)
    {

        cout << "Rack 1:" << " ";
        total_points_1 += array_generation_main(p, shooting_ability);
        cout << endl;
        
        cout << "Rack 2:" << " ";
        total_points_1 += money_ball_array(p, shooting_ability);
        cout << endl;

        cout << "Rack 3:" << " ";
        total_points_1 += array_generation_main(p, shooting_ability);
        cout << endl;

        cout << "Rack 4:" << " ";
        total_points_1 += array_generation_main(p, shooting_ability);
        cout << endl;

        cout << "Rack 5:" << " ";
        total_points_1 += array_generation_main(p, shooting_ability);
        cout << endl;
        cout << endl;

        cout << "Total: " << total_points_1 << " pts" << endl;

    }
    if(money_ball_position == 3){

        cout << "Rack 1:" << " ";
        total_points_1 += array_generation_main(p, shooting_ability);
        cout << endl;
        
        cout << "Rack 2:" << " ";
        total_points_1 += array_generation_main(p, shooting_ability);
        cout << endl;

        cout << "Rack 3:" << " ";
        total_points_1 += money_ball_array(p, shooting_ability);
        cout << endl;

        cout << "Rack 4:" << " ";
        total_points_1 += array_generation_main(p, shooting_ability);
        cout << endl;

        cout << "Rack 5:" << " ";
        total_points_1 += array_generation_main(p, shooting_ability);
        cout << endl;
        cout << endl;

        cout << "Total: " << total_points_1 << " pts" << endl;

    }
    if(money_ball_position == 4){

        cout << "Rack 1:" << " ";
        total_points_1 += array_generation_main(p, shooting_ability);
        cout << endl;
        
        cout << "Rack 2:" << " ";
        total_points_1 += array_generation_main(p, shooting_ability);
        cout << endl;

        cout << "Rack 3:" << " ";
        total_points_1 += array_generation_main(p, shooting_ability);
        cout << endl;

        cout << "Rack 4:" << " ";
        total_points_1 += money_ball_array(p, shooting_ability);
        cout << endl;

        cout << "Rack 5:" << " ";
        total_points_1 += array_generation_main(p, shooting_ability);
        cout << endl;
        cout << endl;

        cout << "Total: " << total_points_1 << " pts" << endl;

    }
    if(money_ball_position == 5){

        cout << "Rack 1:" << " ";
        total_points_1 += array_generation_main(p, shooting_ability);
        cout << endl;
        
        cout << "Rack 2:" << " ";
        total_points_1 += array_generation_main(p, shooting_ability);
        cout << endl;

        cout << "Rack 3:" << " ";
        total_points_1 += array_generation_main(p, shooting_ability);
        cout << endl;

        cout << "Rack 4:" << " ";
        total_points_1 += array_generation_main(p, shooting_ability);
        cout << endl;

        cout << "Rack 5:" << " ";
        total_points_1 += money_ball_array(p, shooting_ability);
        cout << endl;
        cout << endl;

        cout << "Total: " << total_points_1 << " pts" << endl;

    }

    return total_points_1;

}



int main()
{

srand(time(NULL));

//All the variables for this program

        int money_ball_position;
        int shooting_ability; 

        int total_point_player_1;
        int total_point_player_2;
        int play_again;

    do{

//Intro for the game

        cout << "Welcome to the basketball shooting contest!" << endl;

        cout << " " << endl;

        cout << "Player 1:" << endl;

//do while loop for right input for the first variable (money_ball_position)

        do
        {  
            cout << "Where do you want to put your money-ball rack? Enter 1-5: ";
            cin >> money_ball_position;
            cout << " " << endl;

            if (money_ball_position < 1 || money_ball_position > 5 || cin.fail())
            {
                cout << "That is not a valid input. " << endl << endl;
                cin.clear();
                cin.ignore();
            }
        } while(money_ball_position < 1 || money_ball_position > 5);

//do while loop for right input for the second variable (shooting_ability)

            do
        {
            cout << "Enter your shooting ability, from 1 to 99: ";
            cin >> shooting_ability;
            cout << " " << endl;

            if (shooting_ability < 1 || shooting_ability > 99 || cin.fail())
            {
                cout << "That is not a valid input. " << endl << endl;
                cin.clear();
                cin.ignore();
            }
        } while(money_ball_position < 1 || money_ball_position > 99);

        total_point_player_1 += player_output(money_ball_position,shooting_ability);

//Second Player inputs and game

        cout << endl;
        cout << "Player 2:" << endl;

//do while loop for right input for the firsrt variable (money_ball_position)

        do
        {
            cout << "Where do you want to put your money-ball rack? Enter 1-5: ";
            cin >> money_ball_position;
            cout << " " << endl;

            if (money_ball_position < 1 || money_ball_position > 5 || cin.fail())
            {
                cout << "That is not a valid input. " << endl << endl;
                cin.clear();
                cin.ignore();
            }
        } while(money_ball_position < 1 || money_ball_position > 5);

//do while loop forright input for the second variable (shooting_ability)

            do
        {
            cout << "Enter your shooting ability, from 1 to 99: ";
            cin >> shooting_ability;
            cout << " " << endl;

            if (shooting_ability < 1 || shooting_ability > 99 || cin.fail())
            {
                cout << "That is not a valid input. " << endl << endl;
                cin.clear();
                cin.ignore();
            }
        } while(money_ball_position < 1 || money_ball_position > 99);

        total_point_player_2 += player_output(money_ball_position,shooting_ability);

        cout << endl;

//Figuring out who is the winner with if statements and two variablef from the top main

        if(total_point_player_1 > total_point_player_2){

            cout << "Player 1 is the winner!"<< endl;

        }
        if(total_point_player_1 < total_point_player_2){

            cout << "Player 2 is the winner!" << endl;
        }
        if(total_point_player_1 == total_point_player_2){

            cout << "Tie!"<< endl;

        }

// Do while loop for the whole game, looping the whole game.

        do{

            cout << "Would you like to play again? (1-yes, 0-no): ";
            cin >> play_again;

            if(play_again > 1 || play_again < 0 || cin.fail()){

                cout << endl;
                cout << "Sorry, that's not a valid input."<< endl << endl;
                cin.clear();
                cin.ignore();
            }

        }while(play_again > 1 || play_again < 0);

    }while(play_again == 1);

    return 0;
}










