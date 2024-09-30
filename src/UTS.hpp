#ifndef __UTS_H__
#define __UTS_H__
#include <iostream>

class UTS
{
private:
    int arr[72];
    char buff[3];
public:
    int version;
    char subjects[30];
    int tasks[720];

    UTS(char raw[752])
    {
        version = (int)raw[0];

        // Get the name of each subject and put them all together
        for (int i = 0; i < 30; i++)
        {
            subjects[i] = raw[i + 2];
        }

        // Get the tasks all together
        for (int i = 0; i < 720; i++)
        {
            tasks[i] = raw[i + 32];
        }
    }

    std::string getSubjectName(int index)
    {
        buff[0] = subjects[index*3];
        buff[1] = subjects[index*3 + 1]; 
        buff[2] = subjects[index*3 + 2];
        return std::string(buff);
    }
    


    int *getTasks(int index)
    {

        for (int i = 0; i < 72; i++)
        {
            arr[i] = tasks[i + (index * 72)];
        }

        return arr;
    }
};

#endif