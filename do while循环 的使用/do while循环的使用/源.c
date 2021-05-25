#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>
    int main()
    {
        int i = 1;
        do
        {
            if (5 == i)
                continue;
            printf("%d\n", i);
            i++;
        } while (i < 10);
        return 0;
    }
    //结果：1234后面无结果且死循环
  
