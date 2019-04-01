// ski.cpp after macro substitutions and basic formatting

#include<windows.h> // -+TINY SKI+-  
#include<iostream>  // By Frank Force 
#include<ctime>     // ski.3d2k.com

void O(int _)
{
    while(_--)
        std::cout << (!(rand() % 9) ? '*' : '.');
}

int main()
{
    _:short s=72, k=1, i=70, w=11, h=0, o=36, a[11][2], *g=*a, m, e=-1;
    while(w--)
        std::cout << '\n';
    srand(int(time(0)));
    while (++w < 12 || 1[g] >= o&&*g < o) {
        O(k);
        std::cout << 'O';
        for (m = i; m--;)
            std::cout << (w % 100 ? ' ' : '-');
        CONSOLE_SCREEN_BUFFER_INFO U;
        std::cout << 'O';
        O(s-k-i);
        if (w%10==0)
            std::cout << ' ' << w/10;
        GetConsoleScreenBufferInfo(GetStdHandle(-11), &U);
        {
            COORD i={o-1, U.dwCursorPosition.Y-11};
            SetConsoleCursorPosition(GetStdHandle(-11), i);
        }
        std::cout << ". .";
        SetConsoleCursorPosition(GetStdHandle(-11), U.dwCursorPosition);
        std::cout << '\n';
        o += m = (1 & GetKeyState(39) >> 16) - (1 & GetKeyState(37) >> 16);
        GetConsoleScreenBufferInfo(GetStdHandle(-11), &U);
        {
            COORD i={o-1, U.dwCursorPosition.Y-11};
            SetConsoleCursorPosition(GetStdHandle(-11), i);
        }
        std::cout << (m ? m < 0 ? "/^/" : "\\^\\" : "|^|");
        *g++ = k;
        *g = i+k;
        SetConsoleCursorPosition(GetStdHandle(-11), U.dwCursorPosition);
        h = k < 1 ? 1 : s <= k + i ? -1 : (!(rand()%(50))) ? (!(rand()%(2))) * 2
        - 1 : h;
        k += !(rand() % 2) * h;
        Sleep(w < 99 ? 50 - w / 3 : 16);
        (!(rand() % 5)) ? e = i<-25 * e * (!(rand() % (i - 15))) || 25 < i * e
        && (!(rand() % (35 - i))) ? -e : e, k -= e * ((!(rand() % 2)) * k || s <
        k + i + e), i += e : 1;
        g = a[w%11];
    }
    std::cout << "\n" << w * .1 - 1.1 << " meters!";
    while(!(1 & GetKeyState(13) >> 16));
    goto _;
}
