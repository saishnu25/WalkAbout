/**
 *  WalkAbout a Simple Adventure Game
 *  Created by: Saishnu Ramesh Kumar 
 *  
 */

#include <iostream>
#include <stdlib.h>

using namespace std;

//Part 1 - Awakening
int part1(int choice){

    while(true){

        cout << "\nPress 1 to move forward.\nPress 2 to turn right." << endl;
        cin >> choice;

        if (choice == 1){
            cout << "\nYou have progressed forward" << endl;
            break;
        }
        else if (choice == 2){
            cout << "\nYou're trap! GAME OVER reloading section..." << endl;
            return part1(choice);
        }
        else{
            cout << "\nError! Input a valid number!" << endl;
        }
    }
    
}

//Part 2 - Walking Through the Door
int part2(int choice){

    while(true){
        cout << "\nYou're now standing in front of a door.\nPress 1 to open door." << endl;
        cin >> choice;

        if (choice == 1){
            cout << "\nYou walked through the door." << endl;
            break;
        }
        else{
            cout << "\nError! Input a valid number!" << endl;
        }
    }
    
}

//Part 3 - Two Paths
int part3(int choice){

    while(true){
        cout << "\nYou have two paths ahead.\nPress 1 to turn left.\nPress 2 to turn right." << endl;
        cin >> choice;

        if (choice == 1){
            cout << "\nYou've turned left and you see a mysterious painting." << endl;
            break;
        }
        else if (choice == 2){
            cout << "\nYou've decided to turn right and you come across another door."<<endl;
            break;
        }
        else{
            cout << "\nError! Input a valid number!" << endl;
        }
    }
    
}

//Part 4 - Left or Right
int part4(int choice){

    while(true){
        cout<<"\nPress 1 to touch painting.\nPress 2 to go back and open the door."<<endl;
        cin >> choice;

        if(choice == 1){
            cout<<"\nYou decide to touch the painting and the walls start closing in... GAME OVER reloading section..."<<endl;
            return part4(choice);
        }
        else if(choice == 2){
            cout<<"\nYou walked through the door and teleported to another location"<<endl;
            break;
        }

        else{
            cout << "\nError! Input a valid number!" << endl;
        }
    }
}

//Part 5 - Mysterious Figure
int part5(int choice){

    while(true){
        cout<<"\nAfter teleporting, you see a dark figure ahead.\nPress 1 to approach figure"<<endl;
        cin>>choice;

        if(choice == 1){
            cout<<"\nYou approach the figure and found a key hanging next to the keyhole."<<endl;
            break;
        }
        else{
            cout << "\nError! Input a valid number!" << endl;
        }
    }
}

//Part 6 - Escape
int part6(int choice){

    while(true){
        cout<<"\nYou decided to unlock the mysterious figure and saw a portal to the outside world.\nPress 1 to walk into portal."<<endl;
        cin>>choice;

        if(choice == 1){
            cout<<"\nYou walked into the portal and feel relieved that you have escaped, CONGRATS! Game Over..."<<endl;
            return 0;
        }
        else{
            cout << "\nError! Input a valid number!" << endl;
        }
    }

}
    
//Main Function
int main(){

    char name[50];
    string next;
    int choice;

    cout<<"\n\n";
    cout<<"========================================================"<<endl;
    cout<<"     Welcome to WalkAbout, a simple adventure game!\n";
    cout<<"========================================================"<<endl;
    cout<<"\n\n";
    cout<<"You wake up in an undisclosed location.\nObjective: Escape!\n"<<endl;
    cout<<"\nUnknown: Hey, glad you're awake... enter your name"<<endl;
    cin.getline(name, 100); //User inputs their name

    cout<<"\n========== Type NEXT to continue ==========\n"<<endl;

    while(true){

        cin >> next;
        if (next == "NEXT"){
            break;
        }
        else{
            cout<<"Please type NEXT to continue\n";
        }
    }

    cout<<"\nUnknown: Alright "<<name<<", you're trapped in a maze and you've got to find a way out. Be ready and good luck."<<endl;

    //Calling all functions
    part1(choice);
    part2(choice);
    part3(choice);
    part4(choice);
    part5(choice);
    part6(choice);

    cout<<"\nUnknown: Good job "<<name<<" I knew you could do it!"<<endl;
    cout<<"\nThis game has ended... thank you for playing!"<<endl;

    return 0;

}
