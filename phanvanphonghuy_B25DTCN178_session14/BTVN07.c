#include <stdio.h>

int isSonguyento(int n);

int main()
{
    int n;
    printf("Vui long nhap 1 so: ");
    scanf("%d" , &n);
    int snt = isSonguyento(n);
    if(snt = 1)
    {
        printf("True");
    }
    else 
    {
          printf("False");
    }
    
}

int isSonguyento(int n)
{
    if (n < 2)
        return 0; 

    for (int i = 2; i < n; i++)  
    {
        if (n % i == 0)
            return 0;  
    }

    return 1; 
}
