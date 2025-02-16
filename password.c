#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char nb(){
    char nb[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
    int nbi = rand() % 26; 
    return nb[nbi];
}

char kb(){
    char kb[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    int kbi = rand() % 26; 
    return kb[kbi];
}

char spec(){
    char spec[22] = {'%', '!', '?', '$', '/', '@', '_', '.', '\\', '|', '#', '&', '=', '(', ')', '+', '-', '*', '{', '}', '[', ']'};
    int speci = rand() % 22;
    return spec[speci];
}

int nmb(){
    int r = rand() % 10; 
    return r;
}

int main(){
    srand(time(NULL));  
    //random nagybetű
    //printf("%c", nb());
    //random kisbetű
    //printf("%c", kb());
    //speciál karakter
    //printf("%c", spec());
    //random szám
    //printf("%d", nmb());    
    //minimum 8 karakter
    int number;
    scanf("%d", &number);
    for (int i = 0; i < number +1; i++){
        int r = rand() % 4;
        if (r == 1){
            printf("%c", nb());
        }
        else if (r == 2){
            printf("%c", kb());
        }
        else if (r == 3){
            printf("%c", spec());
        }
        else if (r == 4){
            printf("%d", nmb());
        }
        
    }
    char c;
    scanf("%c", &c);
        scanf("%c", &c);

}