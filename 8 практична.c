#include <stdio.h>
#include <string.h>

unsigned long long factorial(int n) 
{
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}

int main() 
{
    char word[15];
    int freq[256] = {0}; 
    unsigned long long numAnagrams;
    int length, i;

    printf("Введіть слово: ");
    scanf("%s", word);

    length = strlen(word);

    for (i = 0; i < length; i++)
    {
        freq[(int)word[i]]++;
    }

    numAnagrams = factorial(length);

    for (i = 0; i < 256; i++)
    {
        if (freq[i] > 1) {
            numAnagrams /= factorial(freq[i]);
        }
    }

    printf("Кількість можливих анаграм: %llu\n", numAnagrams);

    return 0;
}


