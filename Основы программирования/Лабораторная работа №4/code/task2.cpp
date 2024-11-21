#include <iostream>

int main()
{
    char s1[1024];
    char s2[80];

    gets_s(s1, 1024);
    
    int wc;
    char* ptr_s1 = s1;
    char* ptr_s2 = s2;
    char last_c = *ptr_s1;
    while(last_c && wc < 79)
    {   
        if (*ptr_s1 != ' ' || last_c != ' ')
        {
            *ptr_s2++ = last_c;
            wc++;
        }
        last_c = *ptr_s1++;
    }
    
    *ptr_s2 = '\0';
    
    std::cout << s2 << std::endl;

    return 0;
}