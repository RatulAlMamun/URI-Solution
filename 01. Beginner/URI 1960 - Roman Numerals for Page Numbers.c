#include <stdio.h>
#include <string.h>

int main()
{
    char N[5];
    int len;
    gets(N);
    len = strlen(N);
    if(len == 3) {
        if(N[0] == '1') printf("C");
        else if(N[0] == '2') printf("CC");
        else if(N[0] == '3') printf("CCC");
        else if(N[0] == '4') printf("CD");
        else if(N[0] == '5') printf("D");
        else if(N[0] == '6') printf("DC");
        else if(N[0] == '7') printf("DCC");
        else if(N[0] == '8') printf("DCCC");
        else if(N[0] == '9') printf("CM");
        if(N[1] == '1') printf("X");
        else if(N[1] == '2') printf("XX");
        else if(N[1] == '3') printf("XXX");
        else if(N[1] == '4') printf("XL");
        else if(N[1] == '5') printf("L");
        else if(N[1] == '6') printf("LX");
        else if(N[1] == '7') printf("LXX");
        else if(N[1] == '8') printf("LXXX");
        else if(N[1] == '9') printf("XC");
        if(N[2] == '1') printf("I");
        else if(N[2] == '2') printf("II");
        else if(N[2] == '3') printf("III");
        else if(N[2] == '4') printf("IV");
        else if(N[2] == '5') printf("V");
        else if(N[2] == '6') printf("VI");
        else if(N[2] == '7') printf("VII");
        else if(N[2] == '8') printf("VIII");
        else if(N[2] == '9') printf("IX");
    }
    if(len == 2){
        if(N[0] == '1') printf("X");
        else if(N[0] == '2') printf("XX");
        else if(N[0] == '3') printf("XXX");
        else if(N[0] == '4') printf("XL");
        else if(N[0] == '5') printf("L");
        else if(N[0] == '6') printf("LX");
        else if(N[0] == '7') printf("LXX");
        else if(N[0] == '8') printf("LXXX");
        else if(N[0] == '9') printf("XC");
        if(N[1] == '1') printf("I");
        else if(N[1] == '2') printf("II");
        else if(N[1] == '3') printf("III");
        else if(N[1] == '4') printf("IV");
        else if(N[1] == '5') printf("V");
        else if(N[1] == '6') printf("VI");
        else if(N[1] == '7') printf("VII");
        else if(N[1] == '8') printf("VIII");
        else if(N[1] == '9') printf("IX");
    }
    if(len == 1){
        if(N[0] == '1') printf("I");
        else if(N[0] == '2') printf("II");
        else if(N[0] == '3') printf("III");
        else if(N[0] == '4') printf("IV");
        else if(N[0] == '5') printf("V");
        else if(N[0] == '6') printf("VI");
        else if(N[0] == '7') printf("VII");
        else if(N[0] == '8') printf("VIII");
        else if(N[0] == '9') printf("IX");
    }
    printf("\n");
    return 0;
}
