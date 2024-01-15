#include "header.h"

// animation made for the refresh of the screen content
void screen_refresh_animation(){
    for(int j=0; j<5; j++){
        sleep(1);
        cout<<string((j+1)*4,'*')<<endl;
    }
    system("cls");
}