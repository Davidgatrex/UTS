#include "UTS.hpp"
#include <iostream>
#define times(x) for(int i = 0; i < x; i++)

int main(){
    //
    FILE *f = fopen("test.uts", "r");
    char buff[752];
    fread((void *)buff, sizeof(char), 752, f);
    fclose(f);
    UTS uts = UTS(buff);
    times(10)
        printf("%s\n",uts.getSubjectName(i).c_str());
    return 0;
}