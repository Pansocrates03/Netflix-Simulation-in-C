#include <iostream>
using namespace std;
#include <string.h>
#include "Video.h"


/////// CLASE VIDEO ///////

void Video :: setTipoVideo(string data){ tipoVideo = data;};
void Video :: setNombreVideo(string data){nombreVideo = data;};
void Video :: setGenero(string data){genero = data;}
void Video :: setCalificacion(int data){calificacion = data;};
void Video :: setAnioLanzamiento(int data){anioLanzamiento = data;};
void Video :: setDuracion(int data){duracion = data;};

string Video :: getTipoVideo(){return tipoVideo;};
string Video :: getNombreVideo(){return nombreVideo;};
string Video :: getGenero(){return genero;};
int Video :: getCalificación(){return calificacion;};
int Video :: getAnioLanzamiento(){return anioLanzamiento;};
int Video :: getDuracion(){return duracion;};

Video :: Video(string _tipoVideo, string _nombreVideo, string _genero, int _calificacion, int _aniolanzamiento, int _duracion){
    tipoVideo = _tipoVideo;
    nombreVideo = _nombreVideo;
    genero = _genero;
    calificacion = _calificacion;
    anioLanzamiento = _aniolanzamiento;
    duracion = _duracion;
};

Video :: Video(string _tipoVideo, string _nombreVideo, string _genero, int _aniolanzamiento, int _duracion){
    tipoVideo = _tipoVideo;
    nombreVideo = _nombreVideo;
    genero = _genero;
    anioLanzamiento = _aniolanzamiento;
    duracion = _duracion;
};


void Video :: calificaVideo(bool data){
    if(data){ setCalificacion(getCalificación() + 1); }
    else{ setCalificacion(getCalificación() - 1); }
    
};
void Video :: muestraDatos(){
    cout << " ATRIBUTO\t\tVALOR" << endl;
    cout << "----------------------------------------------" << endl;    
    cout << "Tipo video: \t\t" << getTipoVideo() << endl;
    cout << "Nombre video: \t\t" << getNombreVideo() << endl;
    cout << "Género: \t\t" << getGenero() << endl;
    cout << "Calificación: \t\t" << estrellas() << endl;
    cout << "Año: \t\t\t" << getAnioLanzamiento() << endl;
    cout << "Duración: \t\t" << getDuracion() << " minutos" << endl;
};

string Video :: estrellas(){
    string texto = "";
    for (int i = 0; i < calificacion; i++)
    {
        texto = texto + "★ ";
    }
    return texto;
    
}

/////// CLASE SERIE ///////

Serie :: Serie(string _tipoVideo, string _nombreVideo, string _genero, int _calificacion, int _aniolanzamiento, int _duracion, int _cantEpisodios) : Video(_tipoVideo, _nombreVideo, _genero, _calificacion, _aniolanzamiento, _duracion){
    cantEpisodios = _cantEpisodios;
};
void Serie :: muestraDatos(){
    Video :: muestraDatos();
    cout << "Episodios: \t\t" << cantEpisodios << endl;
}

/////// CLASE PELICULA ///////

Pelicula :: Pelicula(string _tipoVideo, string _nombreVideo, string _genero, int _calificacion, int _aniolanzamiento, int _duracion, int _nominaciones) : Video(_tipoVideo, _nombreVideo, _genero, _calificacion, _aniolanzamiento, _duracion){
    nominaciones = _nominaciones;
};
void Pelicula :: muestraDatos(){
    Video :: muestraDatos();
    cout << "Nominaciones: \t\t" << getNominaciones() << endl;
}

