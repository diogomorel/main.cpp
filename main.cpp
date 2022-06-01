#include<iostream>
#include"escultor.hpp"

using namespace std;

int main(){



    Sculptor desenho(25,25,25);

    //pernas
    desenho.setColor(0.19,0.19,0.19,1.0);
    desenho.putBox(3,6,0,1,10,16);
    desenho.putBox(8,11,0,1,10,16);

    desenho.setColor(1.0,1.0,1.0,1.0);
    desenho.putBox(3,6,1,5,10,13);
    desenho.putBox(8,11,1,5,10,13);

    //tronco
    desenho.putBox(3,11,5,14,7,16);

    //bracos
    desenho.putBox(0,3,7,10,9,16);
    desenho.putBox(11,14,7,10,9,16);

    desenho.putBox(0,3,10,12,9,12);
    desenho.putBox(11,14,10,12,9,12);

    desenho.setColor(0.19,0.19,0.19,1.0);
    desenho.putBox(0,3,7,10,16,17);
    desenho.putBox(11,14,7,10,16,17);

    //cabeca
    desenho.setColor(1.0,1.0,1.0,1.0);
    desenho.putBox(1,13,14,15,6,17);
    desenho.putBox(1,13,14,22,6,8);
    desenho.putBox(1,13,22,23,6,17);

    desenho.setColor(0.0,0.55,0.8,1.0);
    desenho.putBox(1,13,15,22,8,9);

    desenho.setColor(0.19,0.19,0.19,1.0);
    desenho.putBox(1,13,15,22,9,17);

    //oxygen
    desenho.setColor(0.65,0.65,0.65,1.0);
    desenho.putBox(3,11,5,14,2,7);
    desenho.cutBox(3,11,5,6,6,7);
    desenho.cutBox(3,11,13,14,6,7);
    desenho.putBox(5,6,14,18,3,4);
    desenho.putBox(7,8,14,24,3,4);

    desenho.setColor(0.3,0.3,0.3,1.0);
    desenho.putVoxel(5,18,3);
    desenho.putVoxel(7,24,3);


    desenho.writeOFF("desenho.off");

    return 0;

}
