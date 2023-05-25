#include <iostream>
using namespace std;
#include <conio.h>
#include "Video.cpp"

#include <chrono>
#include <thread>
using namespace std::this_thread; // sleep_for, sleep_until
using namespace std::chrono; // nanoseconds, system_clock, seconds


#define KEY_UP 72
#define KEY_DOWN 80
#define KEY_LEFT 75
#define KEY_RIGHT 77
#define KEY_ENTER 13


void print(string data){
    cout << data;
}

string input(string data){
    cout << data;
    string respuesta;
    cin >> respuesta;
    return respuesta;
}

string input(){
    string respuesta;
    cin >> respuesta;
    return respuesta;
}

void wait(int seconds){
    for (int i = 0; i < seconds; i++){
        sleep_for(nanoseconds(1000000000));
    }
}

void clc(){
    print("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
}


int inicio(){
    int posicion = 0;
    bool loop = true;
    while (loop){
        cout << '\a' << flush;
        if(posicion == 0){
            clc();
            printf("\x1B[31m\t\t¿QUIÉN ESTÁ VIENDO NETFLIX?\t\t-> [x]\033[0m\t\t");
            print("\n");
            print("----------------------------------------------------------------\n");
            print("|          _e-e_         |                    |          O  o  |\n");
            print("|        _(-._.-)_       |    |\\__/,|   (`\\   |     _\\_   o    |\n");
            print("|     .-(  `---'  )-.    |    |_ _  |.--.) )  |   \\/  o\\ .     |\n");
            print("|    __\\ \\\\___/// /__    |    ( T   )     /   |  //\\___=       |\n");
            print("|   '-._.'/M\\ /M\\`._,-   |   (((^_(((/(((_/   |     ''         |\n");
            print("----------------------------------------------------------------\n");
            print("\t  La Rana\t       El Gato\t\t  El Pez");
            print("\n");
        }
        else if (posicion == 1)
        {
            clc();;
            printf("\x1B[31m\t\t¿QUIÉN ESTÁ VIENDO NETFLIX?\t\t   [x]\033[0m\t\t");
            print("\n");
            print("----------------------------------------------------------------\n");
            print("|          _e-e_         |                    |          O  o  |\n");
            print("|        _(-._.-)_       |    |\\__/,|   (`\\   |     _\\_   o    |\n");
            print("|     .-(  `---'  )-.    |    |_ _  |.--.) )  |   \\/  o\\ .     |\n");
            print("|    __\\ \\\\___/// /__    |    ( T   )     /   |  //\\___=       |\n");
            print("|   '-._.'/M\\ /M\\`._,-   |   (((^_(((/(((_/   |     ''         |\n");
            print("----------------------------------------------------------------\n");
            print("\t->La Rana\t       El Gato\t\t  El Pez");
            print("\n");
        }
        else if (posicion == 2)
        {
            clc();
            printf("\x1B[31m\t\t¿QUIÉN ESTÁ VIENDO NETFLIX?\t\t   [x]\033[0m\t\t");
            print("\n");
            print("----------------------------------------------------------------\n");
            print("|          _e-e_         |                    |          O  o  |\n");
            print("|        _(-._.-)_       |    |\\__/,|   (`\\   |     _\\_   o    |\n");
            print("|     .-(  `---'  )-.    |    |_ _  |.--.) )  |   \\/  o\\ .     |\n");
            print("|    __\\ \\\\___/// /__    |    ( T   )     /   |  //\\___=       |\n");
            print("|   '-._.'/M\\ /M\\`._,-   |   (((^_(((/(((_/   |     ''         |\n");
            print("----------------------------------------------------------------\n");
            print("\t  La Rana\t     ->El Gato\t\t  El Pez");
            print("\n");
        }
        else if (posicion == 3)
        {
            clc();
            printf("\x1B[31m\t\t¿QUIÉN ESTÁ VIENDO NETFLIX?\t\t   [x]\033[0m\t\t");
            print("\n");
            print("----------------------------------------------------------------\n");
            print("|          _e-e_         |                    |          O  o  |\n");
            print("|        _(-._.-)_       |    |\\__/,|   (`\\   |     _\\_   o    |\n");
            print("|     .-(  `---'  )-.    |    |_ _  |.--.) )  |   \\/  o\\ .     |\n");
            print("|    __\\ \\\\___/// /__    |    ( T   )     /   |  //\\___=       |\n");
            print("|   '-._.'/M\\ /M\\`._,-   |   (((^_(((/(((_/   |     ''         |\n");
            print("----------------------------------------------------------------\n");
            print("\t  La Rana\t       El Gato\t\t->El Pez");
            print("\n");
        }

        int c = 0;
            switch(c=getch()) {
            case KEY_UP:
                cout << endl << "Up" << endl;//key up
                if(posicion == 0){ posicion = 1; }
                else{ posicion = 0; }
                break;
            case KEY_DOWN:
                cout << endl << "Down" << endl;   // key down
                if(posicion == 0){ posicion = 1; }
                else{ posicion = 0; }
                break;
            case KEY_LEFT:
                cout << endl << "Left" << endl;  // key left
                if(posicion == 1){ posicion = 3; }
                else if(posicion == 2){ posicion = 1; }
                else if(posicion == 3){ posicion = 2; }
                break;
            case KEY_RIGHT:
                cout << endl << "Right" << endl;  // key right
                if(posicion == 1){ posicion = 2; }
                else if(posicion == 2){ posicion = 3; }
                else if(posicion == 3){ posicion = 1; }
                else if(posicion == 0){ posicion = 1; }
                break;
            case KEY_ENTER:
                loop = false;
                break;
            default:
                    if(c != 224){
                        clc();
                        print("Recuerda que para navegar por el menu debes usar las flechas (← ↑ → ↓)");
                        wait(2);                       
                    }
                break;
            }
    }
    return posicion;   
}

int catalago(Video filme1,Video filme2,Video filme3,Video filme4,Video filme5,Video filme6){
    int posicion = 0;
    bool loop = true;
    while (loop)
    {
        if(posicion == 0){
            clc();
            print("  FILME\t\t\t\tPUNTUACION                    GENERO\n");
            print("--------------------------------------------------------------------------\n");
            print("->" + filme1.getNombreVideo() + "\t\t\t" + filme1.estrellas() + "\t\t\t" + filme1.getGenero() + "\n");
            print("  " + filme2.getNombreVideo() + "\t\t" + filme2.estrellas() + "\t\t\t\t" + filme2.getGenero() + "\n");
            print("  " + filme3.getNombreVideo() + "\t\t\t" + filme3.estrellas() + "\t\t\t\t" + filme3.getGenero() + "\n");
            print("  " + filme4.getNombreVideo() + "\t\t" + filme4.estrellas() + "\t\t\t" + filme4.getGenero() + "\n");
            print("  " + filme5.getNombreVideo() + "\t\t" + filme5.estrellas() + "\t\t\t\t" + filme5.getGenero() + "\n");
            print("  " + filme6.getNombreVideo() + "\t\t\t" + filme6.estrellas() + "\t\t\t\t" + filme6.getGenero() +"\n");
            printf("\x1B[31m  EXIT\033[0m\t\t");
        }
        else if(posicion == 1){
            clc();
            print("  FILME\t\t\t\tPUNTUACION                    GENERO\n");
            print("--------------------------------------------------------------------------\n");
            print("  " + filme1.getNombreVideo() + "\t\t\t" + filme1.estrellas() + "\t\t\t" + filme1.getGenero() + "\n");
            print("->" + filme2.getNombreVideo() + "\t\t" + filme2.estrellas() + "\t\t\t\t" + filme2.getGenero() + "\n");
            print("  " + filme3.getNombreVideo() + "\t\t\t" + filme3.estrellas() + "\t\t\t\t" + filme3.getGenero() + "\n");
            print("  " + filme4.getNombreVideo() + "\t\t" + filme4.estrellas() + "\t\t\t" + filme4.getGenero() + "\n");
            print("  " + filme5.getNombreVideo() + "\t\t" + filme5.estrellas() + "\t\t\t\t" + filme5.getGenero() + "\n");
            print("  " + filme6.getNombreVideo() + "\t\t\t" + filme6.estrellas() + "\t\t\t\t" + filme6.getGenero() +"\n");
            printf("\x1B[31m  EXIT\033[0m\t\t");
        }
        else if(posicion == 2){
            clc();
            print("  FILME\t\t\t\tPUNTUACION                    GENERO\n");
            print("--------------------------------------------------------------------------\n");
            print("  " + filme1.getNombreVideo() + "\t\t\t" + filme1.estrellas() + "\t\t\t" + filme1.getGenero() + "\n");
            print("  " + filme2.getNombreVideo() + "\t\t" + filme2.estrellas() + "\t\t\t\t" + filme2.getGenero() + "\n");
            print("->" + filme3.getNombreVideo() + "\t\t\t" + filme3.estrellas() + "\t\t\t\t" + filme3.getGenero() + "\n");
            print("  " + filme4.getNombreVideo() + "\t\t" + filme4.estrellas() + "\t\t\t" + filme4.getGenero() + "\n");
            print("  " + filme5.getNombreVideo() + "\t\t" + filme5.estrellas() + "\t\t\t\t" + filme5.getGenero() + "\n");
            print("  " + filme6.getNombreVideo() + "\t\t\t" + filme6.estrellas() + "\t\t\t\t" + filme6.getGenero() +"\n");
            printf("\x1B[31m  EXIT\033[0m\t\t");
        }
        else if(posicion == 3){
            clc();
            print("  FILME\t\t\t\tPUNTUACION                    GENERO\n");
            print("--------------------------------------------------------------------------\n");
            print("  " + filme1.getNombreVideo() + "\t\t\t" + filme1.estrellas() + "\t\t\t" + filme1.getGenero() + "\n");
            print("  " + filme2.getNombreVideo() + "\t\t" + filme2.estrellas() + "\t\t\t\t" + filme2.getGenero() + "\n");
            print("  " + filme3.getNombreVideo() + "\t\t\t" + filme3.estrellas() + "\t\t\t\t" + filme3.getGenero() + "\n");
            print("->" + filme4.getNombreVideo() + "\t\t" + filme4.estrellas() + "\t\t\t" + filme4.getGenero() + "\n");
            print("  " + filme5.getNombreVideo() + "\t\t" + filme5.estrellas() + "\t\t\t\t" + filme5.getGenero() + "\n");
            print("  " + filme6.getNombreVideo() + "\t\t\t" + filme6.estrellas() + "\t\t\t\t" + filme6.getGenero() +"\n");
            printf("\x1B[31m  EXIT\033[0m\t\t");
        }
        else if(posicion == 4){
            clc();
            print("  FILME\t\t\t\tPUNTUACION                    GENERO\n");
            print("--------------------------------------------------------------------------\n");
            print("  " + filme1.getNombreVideo() + "\t\t\t" + filme1.estrellas() + "\t\t\t" + filme1.getGenero() + "\n");
            print("  " + filme2.getNombreVideo() + "\t\t" + filme2.estrellas() + "\t\t\t\t" + filme2.getGenero() + "\n");
            print("  " + filme3.getNombreVideo() + "\t\t\t" + filme3.estrellas() + "\t\t\t\t" + filme3.getGenero() + "\n");
            print("  " + filme4.getNombreVideo() + "\t\t" + filme4.estrellas() + "\t\t\t" + filme4.getGenero() + "\n");
            print("->" + filme5.getNombreVideo() + "\t\t" + filme5.estrellas() + "\t\t\t\t" + filme5.getGenero() + "\n");
            print("  " + filme6.getNombreVideo() + "\t\t\t" + filme6.estrellas() + "\t\t\t\t" + filme6.getGenero() +"\n");
            printf("\x1B[31m  EXIT\033[0m\t\t");
        }
        else if(posicion == 5){
            clc();
            print("  FILME\t\t\t\tPUNTUACION                    GENERO\n");
            print("--------------------------------------------------------------------------\n");
            print("  " + filme1.getNombreVideo() + "\t\t\t" + filme1.estrellas() + "\t\t\t" + filme1.getGenero() + "\n");
            print("  " + filme2.getNombreVideo() + "\t\t" + filme2.estrellas() + "\t\t\t\t" + filme2.getGenero() + "\n");
            print("  " + filme3.getNombreVideo() + "\t\t\t" + filme3.estrellas() + "\t\t\t\t" + filme3.getGenero() + "\n");
            print("  " + filme4.getNombreVideo() + "\t\t" + filme4.estrellas() + "\t\t\t" + filme4.getGenero() + "\n");
            print("  " + filme5.getNombreVideo() + "\t\t" + filme5.estrellas() + "\t\t\t\t" + filme5.getGenero() + "\n");
            print("->" + filme6.getNombreVideo() + "\t\t\t" + filme6.estrellas() + "\t\t\t\t" + filme6.getGenero() +"\n");
            printf("\x1B[31m  EXIT\033[0m\t\t");
        }
        else if(posicion == 6){
            clc();
            print("  FILME\t\t\t\tPUNTUACION                    GENERO\n");
            print("--------------------------------------------------------------------------\n");
            print("  " + filme1.getNombreVideo() + "\t\t\t" + filme1.estrellas() + "\t\t\t" + filme1.getGenero() + "\n");
            print("  " + filme2.getNombreVideo() + "\t\t" + filme2.estrellas() + "\t\t\t\t" + filme2.getGenero() + "\n");
            print("  " + filme3.getNombreVideo() + "\t\t\t" + filme3.estrellas() + "\t\t\t\t" + filme3.getGenero() + "\n");
            print("  " + filme4.getNombreVideo() + "\t\t" + filme4.estrellas() + "\t\t\t" + filme4.getGenero() + "\n");
            print("  " + filme5.getNombreVideo() + "\t\t" + filme5.estrellas() + "\t\t\t\t" + filme5.getGenero() + "\n");
            print("  " + filme6.getNombreVideo() + "\t\t\t" + filme6.estrellas() + "\t\t\t\t" + filme6.getGenero() +"\n");
            printf("\x1B[31m->EXIT\033[0m\t\t");
        }

        int c = 0;
            switch(c=getch()) {
            case KEY_UP:
                cout << endl << "Up" << endl;//key up
                posicion = posicion - 1;
                if(posicion == -1){ posicion = 6; }
                break;
            case KEY_DOWN:
                cout << endl << "Down" << endl;   // key down
                posicion = posicion + 1;
                if(posicion == 7){ posicion = 0; }
                break;
            case KEY_ENTER:
                loop = false;
                break;
            default:
                    if(c != 224){
                        clc();
                        print("Recuerda que para navegar por el menu debes usar las flechas (← ↑ → ↓)");
                        wait(2);                       
                    }
                break;
            }


    }
    return posicion;
}

