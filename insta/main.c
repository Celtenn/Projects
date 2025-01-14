#include <stdio.h>
#include <stdlib.h>

int belirleme(char *argv)
{
    char str1[4] = "bir";
    char str2[4] = "iki";
    char str3[5] = "üç";
    char str4[6] = "dört";
    char str5[5] = "beş";
    char str6[6] = "altı";
    char str7[5] = "yedi";
    char str8[6] = "sekiz";
    char str9[6] = "dokuz";
    char str10[3] = "on";
    char str20[6] = "yirmi";
    char str30[5] = "otuz";
    char str40[6] = "kırk";
    char str50[5] = "elli";
    char str60[9] = "altmış";
    char str70[8] = "yetmiş";
    char str80[7] = "seksen";
    char str90[7] = "doksan";
    char str100[5] = "yüz";
    char str1000[4] = "bin";
    char strm[7] = "milyon";
    int i = 0;
    int a = 0;
    while (argv[i])
    {
        if (argv[i] == 'b')
        {
            while (argv[i])
            {
                if (argv[i] != str1[i])
                    break;
                if (argv[i + 1] == '\0' && str1[i + 1] == '\0')
                    return (1);
                i++;
            }
            while (argv[i])
            {
                if (argv[i] != str5[i])
                    break;
                if (argv[i + 1] == '\0' && str5[i + 1] == '\0')
                    return (5);
                i++;
            }
            while (argv[i])
            {
                if (argv[i] != str1000[i])
                    break;
                if (argv[i + 1] == '\0' && str1000[i + 1] == '\0')
                    return (1000);
                i++;
            }
        }
        else if (argv[i] == 'e')
        {
            while (argv[i])
            {
                if (argv[i] != str50[i])
                    break;
                if (argv[i + 1] == '\0' && str50[i + 1] == '\0')
                    return (50);
                i++;
            }
        }
        else if (argv[i] == 'd')
        {
            while (argv[i])
            {
                if (argv[i] != str4[i])
                    break;
                if (argv[i + 1] == '\0' && str4[i + 1] == '\0')
                    return (4);
                i++;
            }
            while (argv[i])
            {
                if (argv[i] != str9[i])
                    break;
                if (argv[i + 1] == '\0' && str9[i + 1] == '\0')
                    return (9);
                i++;
            }
            while (argv[i])
            {
                if (argv[i] != str90[i])
                    break;
                if (argv[i + 1] == '\0' && str90[i + 1] == '\0')
                    return (90);
                i++;
            }
        }
        else if (argv[i] == 'i')
        {
            while (argv[i])
            {
                if (argv[i] != str2[i])
                    break;
                if (argv[i + 1] == '\0' && str2[i + 1] == '\0')
                    return (2);
                i++;
            }
        }
        else if (argv[i] == str3[i])
        {
            while (argv[i])
            {
                if (argv[i] != str3[i])
                    break;
                if (argv[i + 1] == '\0' && str3[i + 1] == '\0')
                    return (3);
                i++;
            }
        }
        else if (argv[i] == 'a')
        {
            while (argv[i])
            {
                if (argv[i] != str6[i])
                    break;
                if (argv[i + 1] == '\0' && str6[i + 1] == '\0')
                    return (6);
                i++;
            }
            while (argv[i])
            {
                if (argv[i] != str60[i])
                    break;
                if (argv[i + 1] == '\0' && str60[i + 1] == '\0')
                    return (60);
                i++;
            }
        }
        else if (argv[i] == 'y')
        {
            while (argv[i])
            {
                if (argv[i] != str7[i])
                    break;
                if (argv[i + 1] == '\0' && str7[i + 1] == '\0')
                    return (7);
                i++;
            }
            while (argv[i])
            {
                if (argv[i] != str70[i])
                    break;
                if (argv[i + 1] == '\0' && str70[i + 1] == '\0')
                    return (70);
                i++;
            }
            while (argv[i])
            {
                if (argv[i] != str100[i])
                    break;
                if (argv[i + 1] == '\0' && str100[i + 1] == '\0')
                    return (100);
                i++;
            }
            while (argv[i])
            {
                if (argv[i] != str20[i])
                    break;
                if (argv[i + 1] == '\0' && str20[i + 1] == '\0')
                    return (20);
                i++;
            }
        }
        else if (argv[i] == 's')
        {
            while (argv[i])
            {
                if (argv[i] != str8[i])
                    break;
                if (argv[i + 1] == '\0' && str8[i + 1] == '\0')
                    return (8);
                i++;
            }
            while (argv[i])
            {
                if (argv[i] != str80[i])
                    break;
                if (argv[i + 1] == '\0' && str80[i + 1] == '\0')
                    return (80);
                i++;
            }
        }
        else if (argv[i] == 'o')
        {
            while (argv[i])
            {
                if (argv[i] != str10[i])
                    break;
                if (argv[i + 1] == '\0' && str10[i + 1] == '\0')
                    return (10);
                i++;
            }
            while (argv[i])
            {
                if (argv[i] != str30[i])
                    break;
                if (argv[i + 1] == '\0' && str30[i + 1] == '\0')
                    return (30);
                i++;
            }
        }
        else if (argv[i] == 'm')
        {
            while (argv[i])
            {
                if (argv[i] != strm[i])
                    break;
                if (argv[i + 1] == '\0' && strm[i + 1] == '\0')
                    return (1000000);
                i++;
            }
        }
        else if (argv[i] == 'k')
        {
            while (argv[i])
            {
                if (argv[i] != str40[i])
                    break;
                if (argv[i + 1] == '\0' && str40[i + 1] == '\0')
                    return (40);
                i++;
            }
        }
        i++;
    }
    return (a);
}


int main(int argc, char **argv)
{
    int result = 1;
    int milyon = 1;
    int add = 0;
    int i = 1;
    if (argc > 1)
    {
        while (argv[i])
        {
            add = belirleme(argv[i]);
            i++;
            if (result >= 1000000)
            {
                if (add >= 100 && milyon < 1000)
                    milyon = milyon * add;
                else
                {
                    if (milyon == 1)
                        milyon = 0;
                    milyon = milyon + add;
                }
            }
            else
            {
                if (add >= 100 && result < 1000)
                    result = result * add;
                else
                {
                    if (result == 1)
                        result = 0;
                    result = result + add;
                }
            }
        }
        if (milyon == 1 && add != 1)
            milyon = 0;
        printf("%d\n", result + milyon);
    }
    return (0);
}