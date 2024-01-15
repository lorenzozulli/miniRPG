#include "header.h"

class Character{
    private: 
        string name;
        int strength;
        int dexterity;
        int constitution;
        int intelligence;
        int wisdom;
        int charisma;
        int hp;
        int level;
        bool exist;

    public:
        enum role {tank=0, bruiser, ranged_assassin, melee_assassin, support, count};
        enum race {human=0, orc, elf, dwarf, count};

        // ----- Metodo costruttore -----
        Character(){
            this->name = name;
            this->role = role;
            this->race = race;
            this->strength = strength;
            this->dexterity = dexterity;
            this->constitution = constitution;
            this->intelligence = intelligence;
            this->wisdom = wisdom;
            this->charisma = charisma;
            this->level = level;
            this->hp = hp;
            this->exist = exist;
        }
        // ----- Metodo distruttore -----
        ~Character(){cout<<"Character Destroyed!";}

        // ----- Metodi getters -----
        string get_name(string name){
            return name;
        }
        string get_role(Character role){
            string role_name[] = {"tank", "bruiser", "ranged_assassin", "melee_assassin", "support"};
            return role_name[role];
        }
        string get_race(Character race){
            string race_name[] = {"human", "orc", "elf", "dwarf"};
            return race_name[race];
        }
        int get_strength(int strength){
            return strength;
        }
        int get_dexterity(int dexterity){
            return dexterity;
        }
        int get_constitution(int constitution){
            return constitution;
        }
        int get_intelligence(int intelligence){
            return intelligence;
        }
        int get_wisdom(int wisdom){
            return wisdom;
        }
        int get_charisma(int charisma){
            return charisma;
        }
        int get_level(int level){
            return level;
        }
        int get_hp(int hp){
            return hp;
        }
        // -------------------------

        // ----- Metodi setters -----
        void set_name(string stat){
            name = stat;
        }
        void set_role(int stat){
            role = stat;
        }
        void set_race(int stat){
            race = stat;
        }
        void set_strength(int stat){
            strength = stat;
        }
        void set_dexterity(int stat){
            dexterity = stat;
        }
        void set_constitution(int stat){
            constitution = stat;
        }
        void set_intelligence(int stat){
            intelligence = stat;
        }
        void set_wisdom(int stat){
            wisdom = stat;
        }
        void set_charisma(int stat){
            charisma = stat;
        }
        void set_level(int stat){
            level = stat;
        }
        void set_hp(int stat){
            hp = stat;
        }
        // -------------------------

        // ----- Other stuff ------
        int calculate_hp(int str, int con){
            return str+con;
        }
        // -------------------------
};