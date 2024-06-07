#include "contadores.h"
#include "MKL25Z4.h"

int salidas [7] = {1,2,3,4,5,6,7};

void contBCD(){
    int bin[10][4] = {
        {0,0,0,0}, //0 en bin
        {0,0,0,1},
        {0,0,1,0},
        {0,0,1,1},
        {0,1,0,0},
        {0,1,0,1},
        {0,1,1,0},
        {1,1,1,1},
        {1,0,0,0},
        {1,0,0,1}  //9 en bin
    };
    int i,j;
    for(i=0;i<10;i++){
        for(j=0;j<4;j++){
            PTA -> PSOR|=(bin[i][j]<<salidas[j]);
        }
        if(bin[10][4]){
            i=0;
            j=0;
        }
    }
}

void contAnillo(){
    int matriz[8][8]={
        {0,0,0,0,0,0,0,1},
        {0,0,0,0,0,0,1,0},
        {0,0,1,0,0,1,0,0},
        {0,1,0,0,1,0,0,0},
        {0,0,0,0},
        {0,0,0,1},
        {0,0,1,0},
        {0,1,0,0},
        {1,0,0,0},
        {0,0,0,0},
        
    }
    
}