#include <iostream>

int main()
{
    int x = 0, y = 0;

    if(std::cin >> x)
    {
        int cnt = 1;
        while(std::cin >> y)
        {
            if (y == x)
            
                ++cnt;
            else{
                std::cout << x << " occurs " << cnt << std::endl;

                x = y;

                cnt = 1;

            }
        }
        std::cout << x << " occurs " << cnt << std::endl;
    }

    return 0;

}