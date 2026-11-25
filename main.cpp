#include <ncurses.h>

using namespace std;

// Variabel permainan
int birdX = 12;
int birdY;
int score = 0;
int highScore = 0;       // Riwayat skor tertinggi
bool newHighScore = false; // Penanda rekor baru
int variasi = 0;

// Konfigurasi 3 pipa berderet 
const int JUMLAH_PIPA = 3;
int pipeX[JUMLAH_PIPA];
int pipeTop[JUMLAH_PIPA];
bool sudahLewat[JUMLAH_PIPA];

// Ukuran pipa
int gapSize = 7;     // Tinggi celah lubang
int pipeWidth = 5;   // Lebar pipa
int jarakPipa = 28;  // Jarak antar pipa