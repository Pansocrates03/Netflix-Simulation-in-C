#include <iostream>
using namespace std;
#include <string.h>

/////// CLASE VIDEO ///////

class Video{
private:
    string tipoVideo;
    string nombreVideo;
    string genero;
    int calificacion;
    int anioLanzamiento;
    int duracion;

public:
    string getTipoVideo();
    string getNombreVideo();
    string getGenero();
    int getCalificación();
    int getAnioLanzamiento();
    int getDuracion();

    void setTipoVideo(string data);
    void setNombreVideo(string data);
    void setGenero(string data);
    void setCalificacion(int data);
    void setAnioLanzamiento(int data);
    void setDuracion(int data);


    Video(string _tipoVideo, string _nombreVideo, string _genero, int _calificacion, int _aniolanzamiento, int _duracion);
    Video(string _tipoVideo, string _nombreVideo, string _genero, int _aniolanzamiento, int _duracion);
    void calificaVideo(bool data);
    virtual void muestraDatos();
    string estrellas();
};

/////// CLASE SERIE ///////

class Serie : public Video{
    private:
        int cantEpisodios;
    public:
        Serie(string, string, string, int, int, int, int);  
        void muestraDatos();
        int getCantEpisodios(){
            return cantEpisodios;
        }
};

/////// CLASE PELICULA ///////

class Pelicula : public Video{
    private:
        int nominaciones;
    public:
        Pelicula(string, string, string, int, int, int, int);
        void muestraDatos();
        int getNominaciones(){
            return nominaciones;
        }
};


