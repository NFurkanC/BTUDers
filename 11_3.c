#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define STRSIZE 10000
//Wikipedia'nın günün makalesndeki ayrı ayrı karakterler ve sayıları
int main()
{
    int counterArray[128] = {0};
    const char string[STRSIZE] = {"The half sovereign is a British gold coin denominated at one-half of a pound sterling. It was first struck in 1544, but was discontinued after 1604. In 1817, as part of the Great Recoinage, half sovereigns and sovereigns were reintroduced. Until the half sovereign was discontinued as a currency coin, it was struck in most years and circulated widely. In addition to being coined in London, it was struck at the colonial mints in Australia and South Africa. It was replaced in Britain from 1914 by paper currency, and was discontinued in Australia in 1920 and South Africa in 1926. After that, it was struck in the coronation years of 1937 and 1953. It has been struck for sale by the Royal Mint as a collector's piece since 1980, and as a bullion coin since 1982; it does not circulate due to the value of the gold it contains. In addition to the portrait of the reigning monarch, the coin features in most years an image of Saint George and the Dragon, designed by Benedetto Pistrucci. "};
    for (int charcontrol = 33; charcontrol < 127; charcontrol++)
    {
        for (int i = 0; string[i] != '\0'; i++)
        {
            if (string[i] == charcontrol)
            {
                counterArray[charcontrol]++;
            }
            
        }
        if(counterArray[charcontrol] != 0){
            printf("%c \t %d\n",charcontrol,counterArray[charcontrol]);
        }
    }
}
