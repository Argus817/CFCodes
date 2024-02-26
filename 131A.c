#include <stdio.h>
int main()
{
    char str[100];
    int towork = 1, i;
    scanf("%s", str);
    for (i=1; str[i]; i++)
    {
        if (str[i]>='a' && str[i]<='z')
        {
            towork = 0;
            break;
        }
    }
    if (towork)
    {
        for (i=0; str[i]; i++)
        {
            if (str[i]>='a' && str[i]<='z')
                str[i] = (char)(str[i]-32);
            else if (str[i]>='A' && str[i]<='Z')
                str[i] = (char)(str[i]+32);
        }
    }
    printf("%s", str);
    return 0;
}
