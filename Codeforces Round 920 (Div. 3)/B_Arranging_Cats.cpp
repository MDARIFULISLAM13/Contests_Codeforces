#include <iostream>
#include <string>

int main()
{
    int a;
    std::cin >> a;
    for (int i = 1; i <= a; i++)
    {
        int b;
        std::cin >> b;
        std::string c, d;
        std::cin >> c >> d;
        int s = 0;
        int ss = 0;
        for (int j = 0; j < b; j++)
        {
            if (c[j] != d[j] && c[j] == '1')
            {
                s++;
            }
        }
        for (int j = 0; j < b; j++)
        {
            if (c[j] != d[j] && d[j] == '1')
            {
                ss++;
            }
        }
        if (s > ss)
        {
            std::cout << s << std::endl;
        }
        else
        {
            std::cout << ss << std::endl;
        }
    }
    return 0;
}