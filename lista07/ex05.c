#include<stdio.h>

int testaTipoChar (char c);

int main()
{
    int c;

    scanf("%c", &c);

    printf("%d", testaTipoChar(c));

    return (0);
}

int testaTipoChar (char c)
{
    int i, vogal, flag_vogal, flag_minuscula;

    flag_vogal = 0;
    flag_minuscula = 0;

    if (c >= 65 && c <= 90)
        vogal = 65;
    else if (c >= 97 && c <= 122)
    {
        vogal = 97;
        flag_minuscula = 1;
    }
    else if (c >= 48 && c <= 57)
        return (5);
    else
        return (0);
    
        // procurando as 5 vogais em loop
        for (i = 0; i < 5; i++)
        {
            if (c == vogal)
                flag_vogal = 1;

            vogal += 4;
            if (i >= 2)
                vogal += 2;
        }

        if (flag_vogal)
            if (!flag_minuscula)
                return (1);
            else
                return (2);
        else
            if (!flag_minuscula)
                return (3);
            else
                return (4);
}

/*
int testaTipoChar (char c)
{
    if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
        return (1);
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
        return (2);
    if (c > 'A' && c <= 'Z')
        return (3);
    if (c > 'a' && c <= 'z')
        return (4);
    if (c > '0' && c <= '9')
        return (5);

    return (0);
}
*/
