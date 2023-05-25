#include <iostream>
using namespace std;
#include "funciones.cpp"

int main(){
    Video *catalogo[10];

    catalogo[0] = new Pelicula("Pelicula", "Avatar", "Drama", 5, 2012, 150, 1);
    catalogo[1] = new Pelicula("Pelicula", "Los Juegos del Hambre", "Accion", 3, 2012, 150, 0);
    catalogo[2] = new Pelicula("Pelicula", "Iron Man", "Accion", 2, 2012, 150, 0);
    catalogo[3] = new Serie("Serie", "Stranger Things", "Ficcion", 4, 2022, 150, 24);
    catalogo[4] = new Serie("Serie", "La Casa de Papel", "Acción", 1, 2022, 150, 12);
    catalogo[5] = new Serie("Serie", "Merlina", "Misterio", 3, 2022, 150, 8);

    clc();
    print("Recuerda que para navegar por el menu debes usar las flechas (← ↑ → ↓) y [ENTER]");
    wait(1); print("."); wait(1); print(" ."); wait(1); print(" ."); wait(1);

    bool loop_Inicio = true;
    while (loop_Inicio){
        int pos = inicio();

        if(pos != 0){
            int posCat = catalago(*catalogo[0],*catalogo[1],*catalogo[2],*catalogo[3],*catalogo[4],*catalogo[5]);
            if(posCat != 6){
                
                int posCal = 0;
                bool loop = true;
                while (loop){
                    clc();
                    if(posCal == 0){
                        catalogo[posCat]->muestraDatos();
                        cout << "----------------------------------------------" << endl;    
                        print("->Me gustó!\t  No me gustó\t  EXIT");
                    }
                    else if(posCal == 1){
                        catalogo[posCat]->muestraDatos();
                        cout << "----------------------------------------------" << endl;    
                        print("  Me gustó!\t->No me gustó\t  EXIT");
                    }
                    else if(posCal == 2){
                        catalogo[posCat]->muestraDatos();
                        cout << "----------------------------------------------" << endl;    
                        print("  Me gustó!\t  No me gustó\t->EXIT");
                    }
                int c = 0;
                switch(c=getch()) {
                case KEY_LEFT:
                    cout << endl << "Left" << endl;  // key left
                    posCal = posCal - 1;
                    if(posCal == -1){ posCal = 2; }
                    break;
                case KEY_RIGHT:
                    cout << endl << "Right" << endl;  // key right
                    posCal = posCal + 1;
                    if(posCal == 3){ posCal = 0; }
                    break;
                case KEY_ENTER:
                    loop = false;
                    break;
                default:
                        if(c == 0){
                        clc();
                        print("Recuerda que para navegar por el menu debes usar las flechas (← ↑ → ↓)");
                        wait(2);                       
                    }
                    break;
                }
                }

                if (posCal == 0)
                {
                    catalogo[posCat]->calificaVideo(true);
                    clc();
                    print("Calificación guardada!");
                    wait(1); print("."); wait(1); print(" ."); wait(1); print(" ."); wait(1);
                }
                else if(posCal == 1){
                    catalogo[posCat]->calificaVideo(false);
                    clc();
                    print("Calificación guardada!\n");
                    print("Regresando al menú principal");
                    wait(1); print("."); wait(1); print(" ."); wait(1); print(" ."); wait(1);
                } 
                
            
 
            }


    } else {
        loop_Inicio = false;
    }
    }
    return 0;
}