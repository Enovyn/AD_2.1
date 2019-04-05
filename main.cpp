#include <iostream>
#include <stdio.h>
#include <fstream>

using namespace std;


char* nextLine(char data[], int line, int length){
char* ptr;
line--;
for(int i = 0; i <= length; i++){
    ptr = &data[i];
    if(*ptr == '\n'){
        line--;
        if(line == 0){
            return ptr + 1;
        }
    }
}
return ptr + 1;
}


int main(){
fstream fs;
int length;
char* data;
int order;
char* ptr;
int pc = 0;
int next = 1;

int akku;
int n = 3;
int i = 0;
int s = 0;

 fs.open("Aufgabe1.txt", fstream::in);
 fs.seekg(0, fs.end);
 length = fs.tellg();
 fs.seekg(0, fs.beg);

 data = new char[length];
 fs.read(data, length);


  ptr = &data[0];
 while(1){
        order = *ptr + *(ptr + 1) + *(ptr + 2);
        if(*ptr == 'H'){
            order++;
        }

        switch(order){
        case 209: ptr = ptr + 5;
            if(*ptr == '1'){
            akku = n;
            }else if(*ptr == '2'){
            akku = 1;
            }else if(*ptr == '3'){
            akku = i;
            }else if(*ptr == '4'){
            akku = s;
            }
            pc++;
            next++;
        break;

        case 201: ptr = ptr + 5;
            if(*ptr == '1'){
            akku = akku + n;
            }else if(*ptr == '2'){
            akku = akku + 1;
            }else if(*ptr == '3'){
            akku = akku + i;
            }else if(*ptr == '4'){
            akku = akku + s;
            }
            pc++;
            next++;
        break;

        case 232: ptr = ptr + 5;
            if(*ptr == '1'){
            n = akku;
            }else if(*ptr == '2'){
            ;
            }else if(*ptr == '3'){
            i = akku;
            }else if(*ptr == '4'){
            s = akku;
            }
            pc++;
            next++;
        break;

        case 238: ptr = ptr + 5;
            if(*ptr == '1'){
            akku = akku * n;
            }else if(*ptr == '2'){
            akku = akku;
            }else if(*ptr == '3'){
            akku = akku * i;
            }else if(*ptr == '4'){
            akku = akku * s;
            }
            pc++;
            next++;
        break;

        case 234: ptr = ptr + 5;
            if(*ptr == '1'){
            akku = akku - n;
            }else if(*ptr == '2'){
            akku = akku - 1;
            }else if(*ptr == '3'){
            akku = akku - i;
            }else if(*ptr == '4'){
            akku = akku - s;
            }
            pc++;
            next++;
        break;

        case 221: ptr = ptr + 5;
                pc++;
            if(akku != 0){
                next = *ptr - 48;
            }else{
                next++;
            }
        break;

        case 248: ptr = ptr + 5;
            if(*ptr == '1'){
            printf("\n%d", n);
            }else if(*ptr == '2'){
            printf("\n%d", '1');
            }else if(*ptr == '3'){
            printf("\n%d", i);
            }else if(*ptr == '4'){
            printf("n: %d      ERGEBNIS: %d     Program Counter: %d", n, s, pc);
            }
            pc++;
            next++;
        break;

        case 233: ptr = ptr + 5;
            pc++;
            return 0;
        break;

        default: printf("\nERROR\n");
        return 0;
        }

       ptr = nextLine(data, next, length);
}


 return 0;
}
