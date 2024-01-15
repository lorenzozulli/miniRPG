// Libraries
#include<iostream>
#include<cstring>
#include<fstream>
#include<windows.h>
#include<unistd.h>

// Namespace
using namespace std;

class Character;

Character create_character(){
    Character new_character;
    string name;
    int role;
    int race;
    cout<<"Welcome to the character creation screen!"<<endl;

    // Name selection
    system("cls");
    cout<<"How you want to be called?"<<endl;
    cout<<"Insert your name here: ";
    cin>>name;
    new_character.set_name(name);

    // Role selection
    system("cls");
    cout<<"Welcome! "<<new_character.name<<endl;
    cout<<"----- choose your role -----"<<endl;

    // TODO: fixare questo for
    for(int i=1;i<=(int)role::count;i++) cout<<i<<") "<<(string)role::i<<endl;
    do{
        cout<<"Insert: ";
        cin>>role;
        new_character.set_role(role);
    } while(); // TODO: aggiungere la condizione logica

    // Race selection
    system("cls");
    cout<<"Now, "<<new_character.name<<endl;
    cout<<"----- choose your race ------"<<endl;

    // TODO: fixare questo for
    for(int i=1;i<=(int)race::count;i++) cout<<i<<") "<<(string)race::i<<endl;
    do{
        cout<<"Insert: ";
        cin>>race;
        new_character.set_race(race);
    } while(); // TODO: aggiungere la condizione logica

    // Stats selection
    system("cls");
    cout<<"Your stats are by default a 5, but right now you can spread 5 extra points"<<endl;
    cout<<"1) strength: ";
    cin>>new_character.set_strength(5)<<endl;
    cout<<"2) dexterity: ";
    cin>>new_character.set_dexterity(5)<<endl;
    cout<<"3) constitution: ";
    cin>>new_character.set_constitution(5)<<endl;
    cout<<"4) intelligence: ";
    cin>>new_character.set_intelligence(5)<<endl;
    cout<<"5) wisdom: ";
    cin>>new_character.set_wisdom(5)<<endl;
    cout<<"6) charisma: ";
    cin>>new_character.set_charisma(5)<<endl;

    return new_character;
}

void main_menu(){
    int operation;
    cout<<"------------------ UNKNOWN RPG ------------------"<<endl;
    cout<<"welcome! choose one of the options below"<<endl;
    cout<<"1) Continue";
    cout<<"2) New character";
    cout<<endl;
    cin>>operation;
    switch(operation){
        case 1: ;break;
        case 2: create_character();break;
        default: cout<<"choose another operation!";break;
    }
}

void quest_selection(){

}

void combat(){

}